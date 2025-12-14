#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1382252998506735018LL;
unsigned long long int var_1 = 14550475505860922200ULL;
int var_2 = 968185480;
long long int var_5 = -6074545866181692167LL;
unsigned long long int var_7 = 4422488568708496397ULL;
unsigned long long int var_10 = 15942778945260080593ULL;
int var_14 = 565428407;
int zero = 0;
signed char var_16 = (signed char)-28;
unsigned int var_17 = 1712756201U;
unsigned int var_18 = 1382617332U;
int var_19 = 1044416831;
unsigned int var_20 = 1713361525U;
unsigned long long int arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
unsigned char arr_2 [15] ;
unsigned long long int arr_3 [15] ;
unsigned int arr_5 [15] [15] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 6672457177157640112ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2098992843U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 12150006964724505161ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 613778209U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 16246859653861992827ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
