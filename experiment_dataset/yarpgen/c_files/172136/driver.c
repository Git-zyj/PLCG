#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1830140730;
unsigned int var_4 = 799784567U;
short var_7 = (short)3652;
short var_8 = (short)-30352;
unsigned int var_10 = 2058262827U;
int zero = 0;
int var_17 = 579055941;
long long int var_18 = 5096033338213839306LL;
short var_19 = (short)20508;
signed char var_20 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
