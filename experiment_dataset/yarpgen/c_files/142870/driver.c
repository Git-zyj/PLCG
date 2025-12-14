#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20368;
signed char var_1 = (signed char)54;
short var_3 = (short)18129;
signed char var_4 = (signed char)44;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17537090583511552261ULL;
int var_9 = 245229837;
int zero = 0;
unsigned int var_11 = 3530315696U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 98771967U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)56;
unsigned int var_16 = 2697510747U;
long long int var_17 = 660532250510072460LL;
signed char arr_0 [11] [11] ;
long long int arr_1 [11] ;
short arr_2 [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3135330577537173653LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)4144;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
