#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)63;
unsigned int var_6 = 3675048629U;
short var_7 = (short)-24718;
unsigned long long int var_8 = 8335039001510059359ULL;
long long int var_9 = 3677869301593680780LL;
int zero = 0;
int var_14 = 1836256573;
unsigned short var_15 = (unsigned short)11351;
unsigned int var_16 = 2762216329U;
unsigned short var_17 = (unsigned short)37080;
unsigned long long int var_18 = 8885962313535605679ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
