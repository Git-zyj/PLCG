#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4391;
unsigned long long int var_3 = 8311921865720263828ULL;
unsigned char var_8 = (unsigned char)79;
unsigned char var_9 = (unsigned char)157;
unsigned long long int var_11 = 15896397609139150704ULL;
unsigned long long int var_15 = 1379354767954325650ULL;
unsigned int var_16 = 1725502947U;
int zero = 0;
short var_18 = (short)-19468;
signed char var_19 = (signed char)39;
int var_20 = -317197073;
unsigned char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)231;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
