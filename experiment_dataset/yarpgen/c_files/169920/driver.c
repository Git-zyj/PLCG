#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -1733881817676574784LL;
unsigned short var_5 = (unsigned short)52373;
short var_6 = (short)-17058;
unsigned short var_8 = (unsigned short)56423;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -1030312994;
int var_13 = -1955349603;
long long int var_14 = -3297537938682326322LL;
int zero = 0;
unsigned short var_16 = (unsigned short)54066;
unsigned short var_17 = (unsigned short)58813;
unsigned char var_18 = (unsigned char)161;
unsigned long long int var_19 = 13900076564595488681ULL;
unsigned short var_20 = (unsigned short)47929;
int var_21 = -684472874;
unsigned short var_22 = (unsigned short)63485;
signed char var_23 = (signed char)-98;
unsigned long long int var_24 = 16956805362002749757ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-85;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)22716;
_Bool var_29 = (_Bool)0;
short arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
_Bool arr_9 [15] [15] ;
unsigned long long int arr_2 [22] [22] ;
_Bool arr_3 [22] ;
_Bool arr_6 [15] ;
unsigned char arr_12 [15] ;
long long int arr_13 [15] [15] ;
_Bool arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)3800;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 12895924619036218555ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = -7064364756149913107LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
