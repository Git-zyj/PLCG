#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21935;
_Bool var_1 = (_Bool)1;
long long int var_3 = -8331369711231848553LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)22053;
long long int var_6 = -6202894540087033810LL;
unsigned int var_7 = 3408466972U;
unsigned short var_8 = (unsigned short)28283;
long long int var_9 = -2499639537127221750LL;
unsigned long long int var_10 = 2785257270879623686ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)24035;
_Bool var_12 = (_Bool)1;
long long int var_13 = 605727912074767706LL;
unsigned short var_14 = (unsigned short)48212;
signed char arr_5 [11] ;
int arr_8 [11] [11] ;
signed char arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 955529033 : 196474598;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)48;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
