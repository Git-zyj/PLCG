#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8285;
signed char var_5 = (signed char)80;
signed char var_6 = (signed char)-115;
long long int var_7 = -2858613173075038758LL;
short var_8 = (short)-8954;
unsigned char var_10 = (unsigned char)112;
short var_11 = (short)22129;
int zero = 0;
unsigned short var_14 = (unsigned short)16168;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2494483359839166571ULL : 9892857890745276032ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4634786748642773694ULL : 1836064345475279846ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 11356957354168153906ULL : 4355476381733850698ULL;
}

void checksum() {
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
