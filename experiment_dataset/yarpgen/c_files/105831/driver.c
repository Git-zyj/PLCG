#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1125885834252666447ULL;
unsigned int var_2 = 2827853450U;
short var_6 = (short)30824;
unsigned long long int var_9 = 2645031100161361778ULL;
int zero = 0;
short var_15 = (short)-3730;
long long int var_16 = -1574590423767345065LL;
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
