#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1935598605;
unsigned short var_4 = (unsigned short)289;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1651276882096086874LL;
unsigned short var_8 = (unsigned short)45918;
long long int var_9 = -572339800532633953LL;
unsigned short var_10 = (unsigned short)39071;
_Bool var_12 = (_Bool)0;
int var_14 = -172523130;
int zero = 0;
unsigned long long int var_15 = 9795969591945663072ULL;
signed char var_16 = (signed char)16;
unsigned char var_17 = (unsigned char)199;
signed char var_18 = (signed char)64;
long long int var_19 = -1080196725641243351LL;
long long int arr_0 [16] [16] ;
_Bool arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
_Bool arr_5 [15] [15] ;
int arr_6 [15] [15] [15] [15] ;
short arr_9 [15] [15] ;
long long int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -6207044120247686935LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 3690563095957652190ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -2070429329;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (short)18267;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -1499346019881166829LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
