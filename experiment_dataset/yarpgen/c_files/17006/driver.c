#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1476275909U;
short var_6 = (short)-8478;
int var_13 = -1731789013;
int zero = 0;
unsigned int var_15 = 1116884131U;
unsigned long long int var_16 = 11830347926838031663ULL;
unsigned long long int var_17 = 11812161368595492622ULL;
unsigned short arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)45459;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1999177153861275598ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2834331925U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 9495501965709911334ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
