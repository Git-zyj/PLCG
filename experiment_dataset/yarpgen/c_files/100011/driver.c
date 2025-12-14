#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3959381788U;
unsigned int var_2 = 2337259396U;
unsigned int var_4 = 2862044483U;
unsigned int var_5 = 1819302066U;
unsigned int var_6 = 2142835744U;
unsigned int var_12 = 2527246769U;
unsigned int var_16 = 1825134869U;
int zero = 0;
unsigned int var_17 = 875839550U;
unsigned int var_18 = 1882349263U;
unsigned int var_19 = 4043819116U;
unsigned int var_20 = 2179858196U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
