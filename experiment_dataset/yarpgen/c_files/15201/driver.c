#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)95;
unsigned long long int var_3 = 4292076775643573257ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-8;
short var_10 = (short)2028;
unsigned int var_12 = 1583430410U;
unsigned int var_15 = 2784093520U;
int zero = 0;
unsigned long long int var_16 = 15359539097522312793ULL;
signed char var_17 = (signed char)68;
unsigned long long int var_18 = 5356343383295350745ULL;
signed char var_19 = (signed char)-18;
unsigned int var_20 = 996520219U;
_Bool arr_0 [16] ;
long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
short arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -832937501229018383LL : 1825782970904872149LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 18256686585239899272ULL : 4381244510917121196ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)1997 : (short)-20371;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
