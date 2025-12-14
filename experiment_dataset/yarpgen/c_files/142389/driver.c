#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1350934009;
int var_12 = -1618576658;
int var_17 = 1338760461;
int zero = 0;
unsigned int var_18 = 2135166822U;
int var_19 = 1585114794;
unsigned short var_20 = (unsigned short)62393;
void init() {
}

void checksum() {
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
