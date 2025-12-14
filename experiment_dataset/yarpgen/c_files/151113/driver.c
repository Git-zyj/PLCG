#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22307;
short var_3 = (short)4488;
short var_7 = (short)18850;
unsigned char var_8 = (unsigned char)114;
unsigned char var_9 = (unsigned char)176;
unsigned char var_10 = (unsigned char)168;
short var_11 = (short)25053;
short var_12 = (short)-2000;
int zero = 0;
short var_13 = (short)-13667;
short var_14 = (short)-13317;
void init() {
}

void checksum() {
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
