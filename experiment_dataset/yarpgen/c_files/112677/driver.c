#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)14526;
unsigned short var_17 = (unsigned short)61413;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4444786643946288237ULL;
short var_22 = (short)-18708;
unsigned int var_23 = 954058185U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
