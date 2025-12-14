#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4907207951400560746ULL;
unsigned long long int var_2 = 1819581684555877107ULL;
short var_4 = (short)-22110;
unsigned long long int var_5 = 8391801228629809766ULL;
short var_6 = (short)24825;
unsigned long long int var_8 = 11812173107862094848ULL;
short var_10 = (short)29584;
unsigned long long int var_11 = 4273995461623702960ULL;
unsigned long long int var_12 = 16987315777134038380ULL;
int zero = 0;
unsigned long long int var_14 = 9569718430871984812ULL;
unsigned long long int var_15 = 15608195147583722350ULL;
unsigned long long int var_16 = 16310557930548535931ULL;
unsigned long long int var_17 = 8523352058835322911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
