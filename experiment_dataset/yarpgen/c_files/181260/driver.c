#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
short var_2 = (short)-7871;
short var_3 = (short)-5733;
unsigned char var_4 = (unsigned char)33;
long long int var_5 = 3954525080151264587LL;
long long int var_6 = 1647900720729799245LL;
signed char var_7 = (signed char)92;
signed char var_8 = (signed char)42;
unsigned char var_10 = (unsigned char)252;
unsigned int var_11 = 1845981175U;
int zero = 0;
unsigned short var_12 = (unsigned short)18073;
unsigned short var_13 = (unsigned short)27120;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2172;
unsigned long long int var_17 = 707852156235549399ULL;
signed char var_18 = (signed char)92;
unsigned short var_19 = (unsigned short)29863;
signed char var_20 = (signed char)90;
signed char arr_0 [15] [15] ;
_Bool arr_1 [15] ;
unsigned short arr_2 [15] ;
short arr_3 [15] ;
signed char arr_4 [15] ;
unsigned short arr_6 [15] ;
unsigned short arr_7 [15] ;
_Bool arr_10 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)51844;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-6757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)48978;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)60421;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
