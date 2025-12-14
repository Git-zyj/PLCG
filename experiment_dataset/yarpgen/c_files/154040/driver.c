#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)127;
unsigned short var_9 = (unsigned short)46870;
int zero = 0;
short var_17 = (short)-7552;
long long int var_18 = 2166362405949950920LL;
unsigned long long int var_19 = 8401969941663098814ULL;
unsigned short var_20 = (unsigned short)9020;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
