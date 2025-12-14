#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)48095;
unsigned long long int var_3 = 13047094248243425472ULL;
unsigned int var_4 = 1677272082U;
int var_6 = 1695547511;
long long int var_7 = -7018788691783990608LL;
int var_8 = 380341771;
long long int var_11 = -6359101563402048544LL;
int zero = 0;
unsigned char var_12 = (unsigned char)29;
unsigned long long int var_13 = 8772526349736829798ULL;
_Bool var_14 = (_Bool)0;
int var_15 = 1394665178;
unsigned long long int var_16 = 5434511351223005598ULL;
int var_17 = 660460064;
_Bool arr_17 [20] [20] ;
unsigned long long int arr_18 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 7576945167872400569ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
