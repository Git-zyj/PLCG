#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
short var_3 = (short)23962;
unsigned long long int var_8 = 3102850745254030743ULL;
short var_10 = (short)30481;
unsigned short var_11 = (unsigned short)45878;
unsigned char var_14 = (unsigned char)134;
unsigned long long int var_19 = 14967397050836325323ULL;
int zero = 0;
short var_20 = (short)-30892;
short var_21 = (short)-3246;
unsigned long long int var_22 = 14822395993053707476ULL;
short var_23 = (short)17745;
int var_24 = 333352494;
long long int arr_0 [13] ;
short arr_1 [13] [13] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 5693627652001082590LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 16332484672187505156ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)23;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
