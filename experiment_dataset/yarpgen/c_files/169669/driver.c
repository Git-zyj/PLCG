#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 5854425227607444838ULL;
unsigned long long int var_13 = 1294992898628169404ULL;
int zero = 0;
short var_14 = (short)26882;
signed char var_15 = (signed char)-84;
signed char var_16 = (signed char)35;
signed char var_17 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
