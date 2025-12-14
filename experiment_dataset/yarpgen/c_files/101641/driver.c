#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned short var_1 = (unsigned short)56242;
short var_2 = (short)-7832;
unsigned short var_3 = (unsigned short)38993;
unsigned char var_4 = (unsigned char)100;
short var_5 = (short)11759;
int var_6 = 945315561;
unsigned long long int var_7 = 7664889600370413403ULL;
unsigned char var_8 = (unsigned char)74;
unsigned char var_9 = (unsigned char)109;
unsigned short var_10 = (unsigned short)61806;
unsigned char var_11 = (unsigned char)227;
int var_12 = 172990187;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)30712;
unsigned int var_16 = 3515401081U;
unsigned short var_17 = (unsigned short)8616;
int zero = 0;
int var_19 = 617302317;
long long int var_20 = -5920575807288471142LL;
int var_21 = 366826165;
unsigned char var_22 = (unsigned char)225;
signed char var_23 = (signed char)3;
unsigned long long int var_24 = 13429836605698347929ULL;
unsigned int var_25 = 4007409419U;
unsigned char var_26 = (unsigned char)232;
short var_27 = (short)-16050;
unsigned int var_28 = 3786087705U;
unsigned int var_29 = 585232832U;
short arr_7 [17] [17] ;
unsigned char arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-19726;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)55;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
