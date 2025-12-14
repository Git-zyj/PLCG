#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3622012736470521570LL;
int var_9 = 2111738028;
unsigned long long int var_10 = 10688797060812565519ULL;
short var_12 = (short)-12643;
unsigned int var_15 = 1437768376U;
unsigned char var_17 = (unsigned char)204;
int zero = 0;
unsigned int var_20 = 3333972058U;
int var_21 = 34128920;
void init() {
}

void checksum() {
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
