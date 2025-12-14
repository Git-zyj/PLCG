#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_12 = -305946272143933602LL;
unsigned int var_14 = 2500375158U;
int zero = 0;
signed char var_16 = (signed char)-49;
signed char var_17 = (signed char)-115;
unsigned long long int var_18 = 4787221419794836204ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
