#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 710626981937305689ULL;
unsigned long long int var_3 = 2389830654283781867ULL;
int var_4 = 654716512;
unsigned long long int var_6 = 9637955696855621002ULL;
signed char var_11 = (signed char)-113;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)93;
int zero = 0;
short var_15 = (short)16924;
unsigned int var_16 = 835619006U;
unsigned short var_17 = (unsigned short)45387;
short var_18 = (short)-1660;
unsigned int var_19 = 3413991139U;
short var_20 = (short)-4383;
unsigned char var_21 = (unsigned char)220;
_Bool var_22 = (_Bool)1;
long long int var_23 = 424921539630099444LL;
signed char arr_4 [10] [10] [10] ;
long long int arr_7 [10] [10] ;
unsigned int arr_8 [10] ;
unsigned long long int arr_9 [10] [10] ;
unsigned long long int arr_14 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 8742837679676498322LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 348279165U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 1598797124864078634ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16610951383577418559ULL : 17665359111940759700ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
