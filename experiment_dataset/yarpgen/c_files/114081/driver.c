#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 769249184521216431LL;
unsigned int var_14 = 2569502631U;
int zero = 0;
int var_16 = 2140979890;
short var_17 = (short)25368;
short var_18 = (short)12356;
unsigned int var_19 = 720202108U;
signed char var_20 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
