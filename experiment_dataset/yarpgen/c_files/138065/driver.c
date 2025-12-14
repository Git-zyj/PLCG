#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4753;
int var_1 = -1071957930;
unsigned char var_2 = (unsigned char)119;
unsigned long long int var_3 = 16917306408202737417ULL;
unsigned short var_5 = (unsigned short)58180;
short var_6 = (short)1889;
unsigned long long int var_7 = 3233170159956442558ULL;
short var_9 = (short)16901;
unsigned short var_10 = (unsigned short)6150;
int zero = 0;
unsigned int var_12 = 3159769168U;
unsigned char var_13 = (unsigned char)252;
long long int var_14 = -2240817212586606177LL;
unsigned char var_15 = (unsigned char)218;
unsigned int var_16 = 3611271052U;
unsigned short var_17 = (unsigned short)438;
unsigned char var_18 = (unsigned char)201;
unsigned short var_19 = (unsigned short)37210;
int var_20 = 1218371751;
unsigned short var_21 = (unsigned short)7988;
unsigned long long int var_22 = 5087677420363129737ULL;
int var_23 = -13005415;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
unsigned short arr_3 [21] [21] [21] ;
unsigned long long int arr_4 [21] [21] [21] [21] ;
unsigned short arr_6 [12] [12] ;
short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1068999777U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)55132 : (unsigned short)4808;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 18279383311566981788ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)48352;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)-11901;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
