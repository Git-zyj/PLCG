#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1684192569U;
unsigned long long int var_5 = 17327068793749403316ULL;
unsigned long long int var_14 = 2609030178523360636ULL;
int zero = 0;
int var_16 = -1076803476;
short var_17 = (short)6958;
long long int var_18 = -1038749800497260789LL;
void init() {
}

void checksum() {
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
