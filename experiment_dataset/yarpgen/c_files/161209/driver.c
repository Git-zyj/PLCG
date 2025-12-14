#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)107;
int var_15 = 1217466252;
unsigned int var_17 = 2951116707U;
int zero = 0;
unsigned char var_20 = (unsigned char)131;
unsigned int var_21 = 2248785704U;
int var_22 = -1645835154;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
