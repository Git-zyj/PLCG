#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
short var_1 = (short)-16823;
unsigned short var_2 = (unsigned short)47568;
unsigned int var_3 = 700032605U;
int var_5 = 2036735567;
signed char var_6 = (signed char)110;
unsigned long long int var_7 = 1544872340776792507ULL;
unsigned long long int var_9 = 14413208083841191602ULL;
unsigned long long int var_10 = 13484942554314829120ULL;
unsigned int var_11 = 263719784U;
unsigned long long int var_12 = 15204622726818254224ULL;
unsigned int var_13 = 283090602U;
unsigned long long int var_14 = 11790933903901394761ULL;
long long int var_15 = 7325746344731046479LL;
unsigned short var_16 = (unsigned short)497;
int zero = 0;
unsigned short var_18 = (unsigned short)11911;
short var_19 = (short)7704;
unsigned short var_20 = (unsigned short)55352;
short var_21 = (short)2586;
signed char var_22 = (signed char)25;
unsigned char var_23 = (unsigned char)154;
unsigned short var_24 = (unsigned short)54258;
unsigned char var_25 = (unsigned char)3;
unsigned long long int var_26 = 15403649447540698317ULL;
short var_27 = (short)13519;
short var_28 = (short)-29043;
unsigned long long int arr_8 [11] ;
unsigned long long int arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 15956376107070259ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 748854092124710522ULL : 6998312315722183091ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
