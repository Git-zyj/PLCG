#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
unsigned char var_3 = (unsigned char)226;
unsigned int var_5 = 2222510840U;
unsigned int var_8 = 1121871713U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)126;
unsigned int var_15 = 45357711U;
signed char var_16 = (signed char)17;
unsigned int var_17 = 2632518999U;
long long int var_18 = -1338444196048242564LL;
long long int var_19 = 892939753945255699LL;
unsigned char var_20 = (unsigned char)13;
signed char var_21 = (signed char)-87;
long long int arr_5 [11] [11] [11] ;
long long int arr_6 [11] [11] [11] ;
unsigned short arr_8 [11] [11] [11] [11] [11] ;
int arr_10 [11] ;
long long int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6582862675426995429LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -3577957709468245393LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)64188;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -466312111 : 888160755;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 8153853407607024285LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
