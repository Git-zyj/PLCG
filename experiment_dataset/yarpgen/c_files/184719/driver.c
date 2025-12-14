#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
signed char var_1 = (signed char)-84;
long long int var_2 = 6864140483671570691LL;
long long int var_3 = 3181050660542188836LL;
unsigned char var_4 = (unsigned char)42;
long long int var_6 = -913757651807285139LL;
unsigned int var_7 = 3101609180U;
int var_8 = -2051256691;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1335707264U;
int zero = 0;
unsigned int var_12 = 2027892902U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-58;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7441410294973868791ULL;
signed char var_18 = (signed char)25;
signed char var_19 = (signed char)-25;
unsigned long long int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
signed char arr_2 [23] ;
unsigned int arr_4 [12] [12] ;
signed char arr_7 [24] ;
long long int arr_6 [12] ;
unsigned int arr_10 [24] [24] ;
_Bool arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 6554132480172335113ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4002383764U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 8713703973786979961LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1126870971U : 3614327628U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
