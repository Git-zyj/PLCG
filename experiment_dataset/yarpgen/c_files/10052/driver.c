#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3717829928523854897LL;
unsigned long long int var_5 = 7701067887468172217ULL;
short var_8 = (short)-27522;
unsigned int var_10 = 1424883748U;
unsigned short var_12 = (unsigned short)38175;
unsigned long long int var_14 = 3532948927671651108ULL;
int zero = 0;
signed char var_17 = (signed char)29;
int var_18 = -454509309;
int var_19 = 1612592290;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 779963924U;
unsigned int arr_0 [19] [19] ;
int arr_2 [19] ;
unsigned char arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1137509182U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -73993772;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)132;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
