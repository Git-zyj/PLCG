#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3904073771U;
unsigned int var_2 = 419088161U;
long long int var_3 = 1670616746845009222LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)-22439;
unsigned short var_8 = (unsigned short)16571;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)87;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-15;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
unsigned short var_19 = (unsigned short)2953;
long long int var_20 = -5088333166587167771LL;
unsigned long long int var_21 = 546923991597389072ULL;
unsigned short var_22 = (unsigned short)23234;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] ;
long long int arr_2 [23] ;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2701384086U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3334509187U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7719256208004658263LL : -4532608157831517284LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 614909127U : 2243704233U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
