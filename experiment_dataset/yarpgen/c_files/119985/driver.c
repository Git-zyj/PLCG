#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned int var_2 = 2907446046U;
unsigned char var_7 = (unsigned char)119;
unsigned char var_8 = (unsigned char)167;
int zero = 0;
short var_11 = (short)-2705;
signed char var_12 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
