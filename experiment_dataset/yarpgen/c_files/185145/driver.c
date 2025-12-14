#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1756081017U;
unsigned char var_10 = (unsigned char)19;
unsigned char var_11 = (unsigned char)109;
unsigned int var_12 = 4021859820U;
int zero = 0;
signed char var_15 = (signed char)45;
signed char var_16 = (signed char)107;
int var_17 = 1620894107;
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
