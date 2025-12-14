#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2335;
long long int var_4 = -7752935514886014219LL;
signed char var_11 = (signed char)35;
signed char var_13 = (signed char)92;
long long int var_16 = 6058412636217156120LL;
int zero = 0;
short var_19 = (short)-19525;
int var_20 = 1164369140;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
