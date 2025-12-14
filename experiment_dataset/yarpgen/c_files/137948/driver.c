#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7697441934105999572ULL;
unsigned int var_4 = 2452226444U;
unsigned long long int var_11 = 7205463799079257251ULL;
int zero = 0;
int var_20 = -811731000;
int var_21 = -40324762;
unsigned int var_22 = 1368615884U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
