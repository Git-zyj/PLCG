#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
_Bool var_1 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 2103700081U;
long long int var_18 = 113937677273923540LL;
int zero = 0;
long long int var_19 = -515649554534598986LL;
unsigned long long int var_20 = 12474329716248786296ULL;
void init() {
}

void checksum() {
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
