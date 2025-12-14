#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
short var_4 = (short)16033;
unsigned char var_5 = (unsigned char)192;
short var_6 = (short)-19419;
int zero = 0;
short var_12 = (short)-32339;
unsigned char var_13 = (unsigned char)79;
short var_14 = (short)-17891;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
