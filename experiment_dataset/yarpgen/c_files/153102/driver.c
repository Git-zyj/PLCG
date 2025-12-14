#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49950;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3022534659U;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-9919;
unsigned short var_6 = (unsigned short)33419;
unsigned int var_7 = 227476604U;
signed char var_8 = (signed char)-75;
short var_9 = (short)-14;
unsigned long long int var_10 = 4418413403605012448ULL;
int zero = 0;
short var_11 = (short)3266;
long long int var_12 = 6057385044464114333LL;
unsigned short var_13 = (unsigned short)21035;
signed char var_14 = (signed char)-26;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2169974501U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3046557603U;
unsigned int arr_0 [20] ;
int arr_2 [20] [20] ;
signed char arr_3 [20] ;
short arr_5 [20] [20] [20] ;
int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4289730903U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -2092840273;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)11878;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 840235892;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
