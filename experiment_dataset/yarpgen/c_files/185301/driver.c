#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8798265089673520879LL;
long long int var_10 = 3875147611140560795LL;
long long int var_11 = 781597302704191097LL;
int zero = 0;
unsigned short var_14 = (unsigned short)1640;
short var_15 = (short)25506;
signed char var_16 = (signed char)126;
short var_17 = (short)-7855;
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
