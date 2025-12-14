#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11981;
unsigned long long int var_1 = 1623904026037183760ULL;
signed char var_3 = (signed char)-122;
unsigned int var_5 = 3390735015U;
unsigned int var_6 = 3713004986U;
unsigned short var_13 = (unsigned short)19807;
int zero = 0;
unsigned int var_15 = 452673741U;
unsigned long long int var_16 = 6974738057199188248ULL;
long long int var_17 = 8974278059804173LL;
void init() {
}

void checksum() {
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
