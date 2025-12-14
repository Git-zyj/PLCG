#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3774152091U;
unsigned long long int var_8 = 1811422721197215040ULL;
signed char var_12 = (signed char)-33;
short var_13 = (short)-28517;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
int var_16 = 1576081574;
signed char var_17 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
