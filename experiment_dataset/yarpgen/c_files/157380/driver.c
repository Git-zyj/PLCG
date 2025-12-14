#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5354736861742610381LL;
long long int var_7 = -3787922911371707180LL;
short var_10 = (short)-9271;
long long int var_11 = -6947268319771658166LL;
int zero = 0;
unsigned short var_14 = (unsigned short)48908;
long long int var_15 = -2684540901700013682LL;
signed char var_16 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
