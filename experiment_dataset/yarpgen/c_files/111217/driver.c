#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22633;
short var_2 = (short)-3972;
short var_5 = (short)-23164;
unsigned int var_8 = 1341588358U;
short var_10 = (short)11821;
short var_11 = (short)-15807;
int zero = 0;
short var_13 = (short)-3653;
short var_14 = (short)28475;
unsigned int var_15 = 3480143705U;
unsigned int var_16 = 2717000792U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
