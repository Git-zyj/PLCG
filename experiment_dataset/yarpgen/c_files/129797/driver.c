#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)56;
long long int var_8 = 1312859010556827745LL;
unsigned char var_9 = (unsigned char)8;
short var_12 = (short)-16206;
int zero = 0;
int var_15 = -987728755;
short var_16 = (short)-18298;
short var_17 = (short)24904;
unsigned long long int var_18 = 5913594886684135467ULL;
long long int var_19 = -2032512784421904188LL;
void init() {
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
