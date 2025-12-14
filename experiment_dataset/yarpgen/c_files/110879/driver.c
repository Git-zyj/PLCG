#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)79;
unsigned long long int var_4 = 13212658681130045209ULL;
signed char var_5 = (signed char)-15;
unsigned char var_7 = (unsigned char)85;
long long int var_8 = -2509001720704135869LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-70;
unsigned long long int var_11 = 7244004904772930019ULL;
unsigned char var_12 = (unsigned char)84;
long long int var_13 = 7001316715468825952LL;
long long int var_14 = -820104512149216154LL;
unsigned long long int var_15 = 3911231254948016797ULL;
int var_16 = 836614065;
int var_17 = 666882774;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
_Bool arr_3 [10] [10] [10] ;
long long int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 78523715;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2837464082346497125LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
