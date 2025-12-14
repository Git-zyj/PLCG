#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)15;
unsigned char var_15 = (unsigned char)166;
unsigned char var_17 = (unsigned char)71;
int zero = 0;
unsigned int var_19 = 1117662156U;
unsigned long long int var_20 = 753379584877586058ULL;
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
