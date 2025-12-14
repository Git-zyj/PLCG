#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2772462306U;
unsigned int var_5 = 306078342U;
short var_7 = (short)-22392;
short var_9 = (short)20367;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
unsigned long long int var_11 = 7217005392464606552ULL;
unsigned long long int var_12 = 6233409299051685909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
