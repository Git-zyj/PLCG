#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-39;
unsigned int var_6 = 1963443367U;
unsigned int var_7 = 376715468U;
unsigned long long int var_8 = 7015503871663032631ULL;
int var_10 = 316188745;
unsigned long long int var_12 = 10673515943816590066ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-99;
signed char var_16 = (signed char)-115;
unsigned long long int var_17 = 10655763984630323845ULL;
unsigned short var_18 = (unsigned short)41023;
_Bool var_19 = (_Bool)1;
signed char arr_3 [22] ;
short arr_7 [11] [11] ;
unsigned long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-18926;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 694270786494850030ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
