#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1849230316689392181LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)32378;
int var_3 = 2032861831;
int var_12 = 511210798;
int zero = 0;
unsigned int var_14 = 377920048U;
signed char var_15 = (signed char)32;
signed char var_16 = (signed char)99;
signed char var_17 = (signed char)20;
unsigned char var_18 = (unsigned char)122;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1842136042153718130LL;
signed char arr_1 [21] ;
unsigned char arr_2 [19] ;
unsigned short arr_3 [19] ;
short arr_4 [19] [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)51670;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-10965;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
