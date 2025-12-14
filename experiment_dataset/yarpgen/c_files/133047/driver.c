#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -35783512;
unsigned int var_3 = 851871393U;
signed char var_6 = (signed char)21;
int var_8 = 1128689144;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
short var_15 = (short)-15266;
signed char var_16 = (signed char)79;
void init() {
}

void checksum() {
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
