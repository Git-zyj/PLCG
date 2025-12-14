#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2213915619U;
signed char var_3 = (signed char)-106;
int var_7 = -218048947;
unsigned long long int var_10 = 17165585662393360361ULL;
unsigned short var_12 = (unsigned short)9548;
int zero = 0;
unsigned short var_13 = (unsigned short)5966;
unsigned int var_14 = 2316884186U;
unsigned long long int var_15 = 630254472584336568ULL;
int arr_0 [20] ;
unsigned int arr_1 [20] ;
long long int arr_5 [16] ;
_Bool arr_2 [20] ;
unsigned int arr_3 [20] [20] ;
_Bool arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 36394007;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 16269883U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2553435132042988451LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1986324466U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
