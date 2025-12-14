#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)33273;
unsigned char var_10 = (unsigned char)180;
unsigned short var_12 = (unsigned short)64398;
int zero = 0;
unsigned short var_14 = (unsigned short)59295;
unsigned short var_15 = (unsigned short)43081;
long long int var_16 = -2287559090712886313LL;
int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1221765878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 12271679391674839394ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -3906977865622759255LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
