#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53540;
int var_3 = 1469989062;
short var_4 = (short)19096;
int var_5 = -2090523730;
unsigned long long int var_6 = 1479662716072439172ULL;
int var_7 = 1045819088;
unsigned short var_8 = (unsigned short)42131;
long long int var_10 = 3354384667255101437LL;
unsigned int var_12 = 1818407420U;
int zero = 0;
unsigned char var_13 = (unsigned char)111;
unsigned short var_14 = (unsigned short)41968;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1773681500U;
_Bool var_17 = (_Bool)1;
_Bool arr_0 [16] ;
unsigned short arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
_Bool arr_2 [16] ;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)47873;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1031637582U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
