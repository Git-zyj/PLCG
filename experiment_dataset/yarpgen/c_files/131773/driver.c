#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)127;
long long int var_8 = 5486370909783895846LL;
unsigned long long int var_9 = 8975411550229901393ULL;
unsigned long long int var_12 = 10767043462660112429ULL;
signed char var_13 = (signed char)-120;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5226911026463400018ULL;
short var_21 = (short)-30431;
unsigned char var_22 = (unsigned char)253;
unsigned char var_23 = (unsigned char)78;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)133;
unsigned short var_26 = (unsigned short)58485;
unsigned short arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
unsigned char arr_5 [16] ;
unsigned char arr_6 [16] ;
unsigned char arr_9 [22] ;
unsigned short arr_10 [22] ;
_Bool arr_4 [12] [12] ;
unsigned char arr_7 [16] ;
signed char arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)56462;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48376;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)2596;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned short)14715;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)110;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
