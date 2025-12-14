#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7824280754577055697LL;
unsigned short var_13 = (unsigned short)43218;
int zero = 0;
unsigned short var_15 = (unsigned short)50937;
unsigned int var_16 = 2236633603U;
short var_17 = (short)-22234;
unsigned long long int var_18 = 15256381878104465572ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
