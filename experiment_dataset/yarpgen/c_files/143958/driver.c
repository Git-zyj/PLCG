#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)253;
unsigned int var_5 = 2442521157U;
unsigned int var_7 = 2253745401U;
unsigned int var_8 = 4021029841U;
short var_12 = (short)22902;
unsigned char var_14 = (unsigned char)238;
int zero = 0;
int var_16 = -1968810718;
int var_17 = 1674797237;
signed char var_18 = (signed char)-34;
unsigned char var_19 = (unsigned char)124;
unsigned short var_20 = (unsigned short)6557;
short var_21 = (short)20010;
unsigned char arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 8156079470496929401ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
