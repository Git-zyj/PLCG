#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7574541310063142770LL;
unsigned short var_6 = (unsigned short)38729;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)13511;
int zero = 0;
unsigned long long int var_15 = 1765839883370759051ULL;
unsigned int var_16 = 3592095318U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
