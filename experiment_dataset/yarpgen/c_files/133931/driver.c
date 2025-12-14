#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3936;
int var_8 = 1408137647;
unsigned short var_12 = (unsigned short)33239;
int zero = 0;
signed char var_16 = (signed char)-80;
unsigned long long int var_17 = 18381885591177275006ULL;
short var_18 = (short)3505;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
