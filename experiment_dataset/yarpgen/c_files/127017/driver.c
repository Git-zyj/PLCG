#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1931312254U;
unsigned char var_3 = (unsigned char)142;
unsigned int var_9 = 1273610775U;
unsigned long long int var_13 = 12202199143593199648ULL;
short var_14 = (short)11848;
int zero = 0;
unsigned int var_20 = 2715893280U;
unsigned short var_21 = (unsigned short)28981;
int var_22 = 1162895862;
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
