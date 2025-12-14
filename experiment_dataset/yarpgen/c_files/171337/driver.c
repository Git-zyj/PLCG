#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-149;
unsigned long long int var_4 = 12912014290615314271ULL;
int var_7 = 1144979782;
unsigned short var_12 = (unsigned short)38918;
int zero = 0;
long long int var_14 = -3044747411274155345LL;
unsigned char var_15 = (unsigned char)112;
unsigned short var_16 = (unsigned short)31496;
unsigned short var_17 = (unsigned short)14523;
unsigned short var_18 = (unsigned short)39079;
int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -819092239 : -530974909;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
