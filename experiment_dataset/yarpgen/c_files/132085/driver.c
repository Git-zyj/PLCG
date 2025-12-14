#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-12116;
unsigned int var_8 = 2108382014U;
long long int var_9 = 9067140552375751246LL;
unsigned int var_15 = 1027552168U;
int zero = 0;
long long int var_16 = -5583253483918711763LL;
signed char var_17 = (signed char)-94;
int var_18 = 1449625933;
unsigned short var_19 = (unsigned short)18242;
unsigned char arr_0 [16] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)60777;
}

void checksum() {
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
