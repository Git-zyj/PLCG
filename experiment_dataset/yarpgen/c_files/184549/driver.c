#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)14065;
unsigned long long int var_9 = 5748415957666723237ULL;
long long int var_12 = 8148460703546110495LL;
unsigned int var_13 = 2969817545U;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = -72570393480871622LL;
signed char var_18 = (signed char)-40;
unsigned long long int var_19 = 13248718861543262041ULL;
short var_20 = (short)-10792;
int var_21 = -919419984;
long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 862252560774845821LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)12306;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)40731;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 946526836;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
