#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7069903653295297528LL;
unsigned char var_8 = (unsigned char)220;
unsigned char var_9 = (unsigned char)15;
unsigned long long int var_12 = 7365205293989332516ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)150;
unsigned int var_16 = 1489110171U;
signed char var_17 = (signed char)-19;
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
