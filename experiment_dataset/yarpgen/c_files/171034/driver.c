#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1320208974U;
unsigned int var_9 = 2052029303U;
int var_11 = -2062232227;
unsigned char var_12 = (unsigned char)79;
short var_13 = (short)73;
unsigned long long int var_17 = 15078965388074958285ULL;
int zero = 0;
short var_18 = (short)-9786;
short var_19 = (short)-22861;
void init() {
}

void checksum() {
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
