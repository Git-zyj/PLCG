#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1235700940U;
unsigned char var_2 = (unsigned char)213;
unsigned short var_3 = (unsigned short)59702;
unsigned short var_8 = (unsigned short)24573;
int var_10 = -4974706;
signed char var_13 = (signed char)(-127 - 1);
unsigned char var_14 = (unsigned char)63;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_18 = 2450045818063126796LL;
signed char var_19 = (signed char)-41;
int var_20 = 1177964882;
_Bool arr_1 [15] [15] ;
_Bool arr_3 [15] ;
int arr_4 [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1603293994;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)109;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
