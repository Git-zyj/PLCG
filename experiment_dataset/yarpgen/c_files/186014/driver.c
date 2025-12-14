#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2110092400U;
int var_3 = -1210712076;
unsigned short var_6 = (unsigned short)11653;
unsigned short var_8 = (unsigned short)21635;
long long int var_9 = -1671662159787222035LL;
int var_15 = -816161023;
int zero = 0;
int var_20 = 1923973409;
short var_21 = (short)5629;
short var_22 = (short)-4748;
unsigned int var_23 = 4155975853U;
short var_24 = (short)15227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
