#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 604899303U;
unsigned int var_2 = 3711325775U;
int var_6 = 1490712083;
unsigned int var_11 = 2127240813U;
int zero = 0;
signed char var_15 = (signed char)107;
int var_16 = 864017364;
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
