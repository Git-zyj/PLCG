#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6450922285961260194LL;
int var_6 = -986603624;
long long int var_9 = -5299480961532232463LL;
int zero = 0;
long long int var_15 = -3102300459659398504LL;
short var_16 = (short)28728;
int var_17 = 1819583494;
short var_18 = (short)7679;
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
