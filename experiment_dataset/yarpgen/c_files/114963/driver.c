#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8103798410706146897LL;
long long int var_1 = 1387017009579986610LL;
int var_2 = 2023217708;
unsigned short var_4 = (unsigned short)27514;
long long int var_5 = -1450991022870365049LL;
unsigned long long int var_7 = 1749034546408079631ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)859;
short var_10 = (short)-3622;
unsigned short var_13 = (unsigned short)31384;
unsigned short var_14 = (unsigned short)1067;
int zero = 0;
long long int var_15 = 4783338214701505537LL;
unsigned char var_16 = (unsigned char)43;
unsigned short var_17 = (unsigned short)48570;
long long int var_18 = -6941680452543108789LL;
unsigned char var_19 = (unsigned char)103;
unsigned long long int var_20 = 9916332226492663592ULL;
signed char var_21 = (signed char)41;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)26;
unsigned short var_24 = (unsigned short)13;
unsigned short arr_0 [23] ;
unsigned long long int arr_1 [23] ;
signed char arr_3 [21] ;
long long int arr_4 [21] ;
int arr_9 [22] [22] ;
unsigned int arr_5 [21] ;
_Bool arr_6 [21] [21] ;
unsigned short arr_10 [22] ;
_Bool arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)31652;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 11589449961969735255ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2904733570606990429LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 767697036;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3679276649U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)55404;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
