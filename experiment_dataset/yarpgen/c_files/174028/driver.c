#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2417299022924236696LL;
short var_2 = (short)-21514;
unsigned long long int var_3 = 4625461740846498768ULL;
short var_7 = (short)8158;
int var_8 = 25214558;
unsigned long long int var_10 = 16765446779779177403ULL;
unsigned long long int var_11 = 3649911215705744401ULL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)32;
signed char var_17 = (signed char)2;
int zero = 0;
unsigned char var_18 = (unsigned char)7;
unsigned short var_19 = (unsigned short)11008;
unsigned int var_20 = 3793647732U;
unsigned char var_21 = (unsigned char)43;
unsigned short var_22 = (unsigned short)43609;
short arr_0 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)12511;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2401389132139689927ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
