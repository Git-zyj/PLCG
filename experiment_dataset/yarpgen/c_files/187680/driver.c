#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2833648644904211160LL;
signed char var_4 = (signed char)-63;
short var_10 = (short)-19839;
short var_12 = (short)28979;
signed char var_15 = (signed char)-66;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned short var_17 = (unsigned short)48754;
unsigned int var_18 = 1887350874U;
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
