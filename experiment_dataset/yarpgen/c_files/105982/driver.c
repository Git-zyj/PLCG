#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-26258;
short var_9 = (short)-25925;
int var_12 = 1675208471;
signed char var_13 = (signed char)-125;
long long int var_15 = -7672552291006887609LL;
signed char var_16 = (signed char)-116;
int zero = 0;
unsigned short var_17 = (unsigned short)38703;
unsigned long long int var_18 = 16078417633721365016ULL;
void init() {
}

void checksum() {
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
