#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7922;
int var_6 = 1992725899;
short var_9 = (short)-13305;
short var_18 = (short)18857;
int var_19 = -1619254000;
int zero = 0;
short var_20 = (short)-14902;
unsigned int var_21 = 1649206635U;
unsigned short var_22 = (unsigned short)15082;
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
