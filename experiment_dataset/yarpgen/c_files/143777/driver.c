#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14036247233670949486ULL;
unsigned int var_3 = 2293692946U;
unsigned char var_4 = (unsigned char)123;
short var_9 = (short)-11232;
unsigned char var_10 = (unsigned char)192;
unsigned int var_14 = 1536327268U;
int zero = 0;
unsigned int var_15 = 1183814950U;
unsigned char var_16 = (unsigned char)65;
unsigned int var_17 = 4099774322U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
