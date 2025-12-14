#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3702816444406573928LL;
unsigned int var_3 = 1741084354U;
unsigned int var_11 = 50085237U;
signed char var_15 = (signed char)53;
int zero = 0;
signed char var_16 = (signed char)96;
int var_17 = -1710049524;
void init() {
}

void checksum() {
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
