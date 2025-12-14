#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14888;
short var_1 = (short)17213;
unsigned long long int var_2 = 13885192763059204220ULL;
int var_4 = 1920382066;
signed char var_7 = (signed char)62;
int var_10 = 1418452753;
int zero = 0;
signed char var_15 = (signed char)-36;
int var_16 = 1359064979;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
