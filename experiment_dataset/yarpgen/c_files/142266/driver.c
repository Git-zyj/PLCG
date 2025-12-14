#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15587213293623876420ULL;
int var_4 = -144300190;
int var_5 = 138137753;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)38197;
unsigned short var_14 = (unsigned short)39602;
int zero = 0;
unsigned short var_15 = (unsigned short)18149;
short var_16 = (short)27298;
short var_17 = (short)-28911;
int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1279360364;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 13673488598129739934ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)29786;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
