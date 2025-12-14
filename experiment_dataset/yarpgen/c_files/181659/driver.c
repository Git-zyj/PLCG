#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_7 = -4666783018549221838LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -2830136979201668829LL;
unsigned int var_20 = 3237910381U;
unsigned long long int var_21 = 11551225520036071838ULL;
unsigned char var_22 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
