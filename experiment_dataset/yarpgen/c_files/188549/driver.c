#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_11 = -2968999507323574184LL;
long long int var_15 = -8444083861588681689LL;
signed char var_16 = (signed char)36;
int zero = 0;
unsigned short var_18 = (unsigned short)51435;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2851658838U;
void init() {
}

void checksum() {
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
