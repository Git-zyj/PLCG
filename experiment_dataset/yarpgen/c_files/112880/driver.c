#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1759499113;
unsigned int var_10 = 3707398632U;
unsigned int var_11 = 725714228U;
signed char var_13 = (signed char)95;
long long int var_15 = 6730193007879989604LL;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)23116;
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
