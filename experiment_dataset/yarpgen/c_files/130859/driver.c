#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 991040808U;
unsigned int var_3 = 3157232155U;
signed char var_5 = (signed char)92;
long long int var_6 = -5444828881525908204LL;
unsigned long long int var_7 = 16534156182730537878ULL;
signed char var_8 = (signed char)-113;
int var_9 = -75135285;
unsigned char var_12 = (unsigned char)255;
unsigned short var_13 = (unsigned short)59150;
int zero = 0;
unsigned long long int var_15 = 4499052798853866979ULL;
unsigned short var_16 = (unsigned short)32441;
signed char var_17 = (signed char)-22;
signed char var_18 = (signed char)123;
signed char arr_0 [23] [23] ;
short arr_2 [23] ;
short arr_3 [23] ;
unsigned short arr_4 [23] ;
signed char arr_5 [23] [23] ;
signed char arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)29020;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)3554;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57339 : (unsigned short)59688;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)66 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)13;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
