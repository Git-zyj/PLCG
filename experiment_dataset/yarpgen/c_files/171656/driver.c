#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4218351010164894002ULL;
unsigned int var_4 = 10452466U;
short var_5 = (short)14237;
unsigned char var_6 = (unsigned char)232;
unsigned int var_15 = 4249474185U;
int var_16 = -666277977;
int zero = 0;
short var_17 = (short)-12612;
unsigned char var_18 = (unsigned char)151;
void init() {
}

void checksum() {
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
