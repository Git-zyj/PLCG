#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1250891612121726109LL;
unsigned short var_4 = (unsigned short)51285;
unsigned int var_10 = 1904994045U;
int zero = 0;
signed char var_15 = (signed char)54;
unsigned long long int var_16 = 3883494694598912221ULL;
unsigned short var_17 = (unsigned short)53245;
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
