#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12238885997640561039ULL;
short var_10 = (short)-19758;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
signed char var_12 = (signed char)-22;
unsigned char var_13 = (unsigned char)0;
unsigned int var_14 = 75147364U;
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
