#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1657133320;
unsigned short var_6 = (unsigned short)13;
long long int var_9 = 3879673962489068480LL;
unsigned char var_11 = (unsigned char)86;
long long int var_12 = 1723486811522056372LL;
unsigned long long int var_13 = 2878500711226664814ULL;
int zero = 0;
int var_14 = 515176999;
int var_15 = -1232837141;
unsigned short var_16 = (unsigned short)19571;
short var_17 = (short)-22170;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
