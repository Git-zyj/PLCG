#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1483352162;
unsigned short var_1 = (unsigned short)61264;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)123;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5096606929441280331ULL;
long long int var_8 = 1896380016210376816LL;
signed char var_9 = (signed char)45;
signed char var_10 = (signed char)40;
unsigned short var_11 = (unsigned short)60413;
unsigned int var_12 = 3575387183U;
short var_14 = (short)1448;
int zero = 0;
int var_15 = 145208613;
unsigned short var_16 = (unsigned short)5541;
int var_17 = 1588515616;
signed char var_18 = (signed char)29;
unsigned long long int var_19 = 2782608032213239739ULL;
int var_20 = -72568165;
signed char arr_2 [16] ;
unsigned int arr_5 [16] [16] [16] ;
unsigned int arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 779193113U : 3536408521U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3339178856U : 252251656U;
}

void checksum() {
    hash(&seed, var_15);
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
