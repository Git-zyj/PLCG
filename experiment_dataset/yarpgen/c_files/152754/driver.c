#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 346303332U;
unsigned char var_8 = (unsigned char)19;
unsigned int var_10 = 3379946254U;
unsigned long long int var_11 = 4830952926330759526ULL;
unsigned char var_15 = (unsigned char)251;
unsigned int var_16 = 3199850794U;
short var_17 = (short)3430;
unsigned char var_18 = (unsigned char)50;
int zero = 0;
int var_20 = 2052182187;
unsigned char var_21 = (unsigned char)35;
unsigned short var_22 = (unsigned short)1006;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
