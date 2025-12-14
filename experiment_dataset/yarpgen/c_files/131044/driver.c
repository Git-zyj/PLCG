#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned char var_2 = (unsigned char)171;
short var_3 = (short)-29567;
unsigned int var_7 = 311662163U;
unsigned char var_11 = (unsigned char)161;
unsigned char var_12 = (unsigned char)25;
int zero = 0;
unsigned int var_14 = 1253198723U;
unsigned char var_15 = (unsigned char)46;
signed char var_16 = (signed char)67;
void init() {
}

void checksum() {
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
