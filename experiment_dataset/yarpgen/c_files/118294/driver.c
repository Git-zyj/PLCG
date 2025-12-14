#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19525;
short var_1 = (short)-21464;
unsigned char var_4 = (unsigned char)238;
unsigned short var_5 = (unsigned short)30652;
long long int var_7 = -2678695847819671886LL;
short var_10 = (short)2506;
unsigned char var_11 = (unsigned char)223;
short var_14 = (short)31203;
int zero = 0;
unsigned char var_15 = (unsigned char)70;
long long int var_16 = 2364977662182653265LL;
unsigned long long int var_17 = 14509894516795614104ULL;
unsigned short arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)8579;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)41787;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
