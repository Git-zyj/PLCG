#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7238963365655292108LL;
unsigned int var_1 = 2444389612U;
unsigned char var_2 = (unsigned char)174;
long long int var_3 = -7173362293062409999LL;
short var_4 = (short)-19647;
signed char var_8 = (signed char)46;
unsigned long long int var_9 = 14477311771159050284ULL;
int zero = 0;
long long int var_10 = -7767282789795927130LL;
int var_11 = 486505601;
unsigned int var_12 = 226236203U;
short var_13 = (short)-148;
short var_14 = (short)-29588;
unsigned int var_15 = 2475295105U;
unsigned char var_16 = (unsigned char)110;
unsigned long long int var_17 = 782201857920132142ULL;
unsigned short var_18 = (unsigned short)23057;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
_Bool arr_2 [13] [13] ;
signed char arr_4 [13] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7541563009911685990LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 14248222467617499547ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2723507246373001314LL : -4204309752364730561LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
