#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2771;
_Bool var_8 = (_Bool)0;
int var_13 = -971451596;
long long int var_17 = -2941052248275421787LL;
int zero = 0;
long long int var_20 = -8900285890495511156LL;
int var_21 = 1967540231;
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
