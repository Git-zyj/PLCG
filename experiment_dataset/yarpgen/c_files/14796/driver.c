#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15871219042192574038ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 4264495083U;
signed char var_9 = (signed char)56;
int zero = 0;
unsigned long long int var_12 = 13306634060458206892ULL;
signed char var_13 = (signed char)113;
long long int var_14 = 543281353411188879LL;
unsigned short var_15 = (unsigned short)8022;
long long int var_16 = -4389647383340360655LL;
signed char var_17 = (signed char)122;
_Bool var_18 = (_Bool)0;
short var_19 = (short)6923;
_Bool var_20 = (_Bool)0;
unsigned short arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
int arr_3 [23] [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)27925;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2651384953962831333ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 140026761;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
