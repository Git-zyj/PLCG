#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-13157;
signed char var_11 = (signed char)6;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
long long int var_16 = -4828204811761575229LL;
unsigned short var_17 = (unsigned short)12203;
unsigned long long int var_18 = 76977632945969919ULL;
long long int var_19 = -2472723511720464404LL;
unsigned int arr_1 [13] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3701920393U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6817141704073240396LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
