/*
 *	server/zone/objects/building/medical/MedicalBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "MedicalBuildingObject.h"

/*
 *	MedicalBuildingObjectStub
 */

MedicalBuildingObject::MedicalBuildingObject(LuaObject* templateData) : BuildingObject(DummyConstructorParameter::instance()) {
	_impl = new MedicalBuildingObjectImplementation(templateData);
	_impl->_setStub(this);
}

MedicalBuildingObject::MedicalBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
}

MedicalBuildingObject::~MedicalBuildingObject() {
}


/*
 *	MedicalBuildingObjectImplementation
 */

MedicalBuildingObjectImplementation::MedicalBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}

MedicalBuildingObjectImplementation::~MedicalBuildingObjectImplementation() {
	MedicalBuildingObjectImplementation::finalize();
}


void MedicalBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(MedicalBuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void MedicalBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MedicalBuildingObject*) stub;
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MedicalBuildingObjectImplementation::_getStub() {
	return _this;
}

MedicalBuildingObjectImplementation::operator const MedicalBuildingObject*() {
	return _this;
}

void MedicalBuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MedicalBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MedicalBuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MedicalBuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MedicalBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MedicalBuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MedicalBuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MedicalBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("MedicalBuildingObject");

}

MedicalBuildingObjectImplementation::MedicalBuildingObjectImplementation(LuaObject* templateData) : BuildingObjectImplementation((templateData)) {
	_initializeImplementation();
	// server/zone/objects/building/medical/MedicalBuildingObject.idl(55):  Logger.setLoggingName("MedicalBuildingObject");
	Logger::setLoggingName("MedicalBuildingObject");
}

/*
 *	MedicalBuildingObjectAdapter
 */

MedicalBuildingObjectAdapter::MedicalBuildingObjectAdapter(MedicalBuildingObjectImplementation* obj) : BuildingObjectAdapter(obj) {
}

Packet* MedicalBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	MedicalBuildingObjectHelper
 */

MedicalBuildingObjectHelper* MedicalBuildingObjectHelper::staticInitializer = MedicalBuildingObjectHelper::instance();

MedicalBuildingObjectHelper::MedicalBuildingObjectHelper() {
	className = "MedicalBuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MedicalBuildingObjectHelper::finalizeHelper() {
	MedicalBuildingObjectHelper::finalize();
}

DistributedObject* MedicalBuildingObjectHelper::instantiateObject() {
	return new MedicalBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* MedicalBuildingObjectHelper::instantiateServant() {
	return new MedicalBuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MedicalBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MedicalBuildingObjectAdapter((MedicalBuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

