#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2923261527U;
signed char var_1 = (signed char)115;
long long int var_2 = -6559997600600555926LL;
unsigned long long int var_7 = 8710389355606785628ULL;
long long int var_9 = -2250726936155170322LL;
unsigned char var_10 = (unsigned char)13;
unsigned int var_12 = 4017180307U;
unsigned int var_13 = 1318776020U;
unsigned int var_15 = 2819972328U;
int zero = 0;
signed char var_18 = (signed char)-92;
unsigned long long int var_19 = 1822488091158902813ULL;
signed char var_20 = (signed char)103;
unsigned short var_21 = (unsigned short)1018;
signed char var_22 = (signed char)62;
unsigned char arr_0 [18] [18] ;
_Bool arr_2 [18] [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
