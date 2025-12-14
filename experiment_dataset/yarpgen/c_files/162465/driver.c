#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11247879414432081575ULL;
long long int var_4 = 2185909117354642270LL;
unsigned long long int var_5 = 10271635076362811471ULL;
unsigned long long int var_6 = 17005385020307388795ULL;
unsigned long long int var_7 = 15120661257439949854ULL;
int var_9 = 705275157;
int var_11 = -563807368;
int zero = 0;
signed char var_12 = (signed char)104;
int var_13 = 1603169632;
unsigned char var_14 = (unsigned char)200;
unsigned long long int var_15 = 16552724952034238625ULL;
signed char var_16 = (signed char)3;
signed char var_17 = (signed char)-10;
unsigned int var_18 = 2635854234U;
unsigned int var_19 = 1555950409U;
int var_20 = -599577726;
unsigned char var_21 = (unsigned char)212;
unsigned short arr_4 [13] ;
unsigned long long int arr_6 [13] ;
signed char arr_9 [17] [17] ;
int arr_12 [16] [16] ;
signed char arr_2 [12] ;
unsigned char arr_7 [13] ;
short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)22612;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 6346161993422069377ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = -1393563536;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)12661;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
