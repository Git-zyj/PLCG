#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1598547811;
int zero = 0;
signed char var_11 = (signed char)-102;
int var_12 = -1269209670;
unsigned int var_13 = 1634942381U;
unsigned long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
int arr_3 [21] ;
unsigned int arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 14915449936122299180ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2794244340U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1277144395;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 1618985304U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
