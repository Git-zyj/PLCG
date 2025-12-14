#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_1 = 1454132176886769848ULL;
short var_5 = (short)13612;
int zero = 0;
unsigned int var_19 = 2991364000U;
unsigned long long int var_20 = 13020149145425933786ULL;
unsigned long long int var_21 = 9679079532527102104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
