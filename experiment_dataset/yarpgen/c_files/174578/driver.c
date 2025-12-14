#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1996405635U;
int var_10 = -1621071495;
int zero = 0;
unsigned long long int var_11 = 15486855818026510996ULL;
signed char var_12 = (signed char)-19;
unsigned long long int var_13 = 8769216954401354728ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
