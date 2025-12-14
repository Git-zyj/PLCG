#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1087648670U;
unsigned int var_2 = 3269904907U;
unsigned short var_3 = (unsigned short)16108;
unsigned short var_4 = (unsigned short)64838;
short var_10 = (short)5442;
unsigned int var_11 = 4284568959U;
signed char var_12 = (signed char)118;
unsigned char var_13 = (unsigned char)168;
unsigned int var_14 = 2909079157U;
unsigned short var_16 = (unsigned short)34773;
int zero = 0;
unsigned short var_17 = (unsigned short)19715;
unsigned char var_18 = (unsigned char)135;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)56400;
unsigned int var_21 = 2050994116U;
unsigned int var_22 = 1798260712U;
unsigned char var_23 = (unsigned char)99;
unsigned int arr_2 [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2091639577U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)122;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
