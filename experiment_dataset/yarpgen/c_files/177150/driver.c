#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2496720701U;
unsigned char var_3 = (unsigned char)102;
signed char var_13 = (signed char)38;
unsigned int var_16 = 2082045874U;
int zero = 0;
unsigned char var_18 = (unsigned char)26;
unsigned long long int var_19 = 12470234922526015546ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
