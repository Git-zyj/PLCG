#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11270;
int var_1 = -477350738;
signed char var_4 = (signed char)36;
unsigned short var_5 = (unsigned short)38592;
unsigned int var_6 = 3182648864U;
unsigned short var_7 = (unsigned short)43478;
signed char var_8 = (signed char)67;
unsigned short var_9 = (unsigned short)610;
unsigned long long int var_10 = 5440964801566877658ULL;
signed char var_11 = (signed char)-87;
signed char var_12 = (signed char)91;
short var_13 = (short)25073;
int zero = 0;
unsigned char var_14 = (unsigned char)43;
long long int var_15 = 6098079250723360808LL;
long long int var_16 = 6607162920479956074LL;
signed char var_17 = (signed char)95;
unsigned long long int var_18 = 6452353339280282443ULL;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)41319;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
