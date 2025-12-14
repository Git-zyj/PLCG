#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4289881828132166231ULL;
unsigned long long int var_1 = 6440400734461639594ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)19537;
short var_6 = (short)23166;
short var_7 = (short)25999;
unsigned char var_8 = (unsigned char)244;
short var_9 = (short)19977;
_Bool var_10 = (_Bool)1;
int var_11 = 948162318;
unsigned long long int var_12 = 11680533866987713958ULL;
unsigned short var_13 = (unsigned short)4090;
unsigned int var_14 = 201190557U;
int zero = 0;
int var_17 = -1837158032;
_Bool var_18 = (_Bool)1;
int var_19 = -420460071;
unsigned char var_20 = (unsigned char)77;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)38;
unsigned long long int var_23 = 1392398934607902968ULL;
unsigned char var_24 = (unsigned char)198;
unsigned long long int var_25 = 2573595663527024657ULL;
unsigned int var_26 = 3845741772U;
short var_27 = (short)5994;
int var_28 = -1606479068;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)126;
unsigned char var_31 = (unsigned char)131;
unsigned int arr_0 [16] [16] ;
unsigned char arr_1 [16] [16] ;
int arr_3 [24] [24] ;
short arr_4 [24] ;
unsigned char arr_5 [10] ;
_Bool arr_8 [15] ;
int arr_9 [15] [15] ;
_Bool arr_2 [16] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3049748784U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1176523905;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-3182;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = -2161158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7346814185692989881ULL : 8534377634188526257ULL;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
