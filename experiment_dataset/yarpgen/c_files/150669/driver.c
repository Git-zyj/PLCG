#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2004691578;
short var_7 = (short)-24999;
unsigned short var_10 = (unsigned short)42318;
int zero = 0;
long long int var_11 = 6521485852279162293LL;
unsigned long long int var_12 = 8685273381948021969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
