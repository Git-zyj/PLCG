#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2434946925377424045LL;
unsigned int var_6 = 1813096583U;
unsigned short var_7 = (unsigned short)5504;
int var_9 = 1179799919;
unsigned int var_10 = 2435689495U;
int zero = 0;
unsigned short var_12 = (unsigned short)27806;
unsigned int var_13 = 1898828788U;
unsigned int var_14 = 3623363092U;
int var_15 = -736742126;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
