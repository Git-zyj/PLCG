#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 517920895264817635LL;
unsigned short var_2 = (unsigned short)48219;
unsigned int var_3 = 2155275193U;
unsigned long long int var_5 = 7076090074642990796ULL;
int var_6 = -1633661252;
unsigned short var_7 = (unsigned short)32725;
unsigned short var_10 = (unsigned short)7286;
int zero = 0;
short var_13 = (short)9792;
unsigned short var_14 = (unsigned short)46114;
signed char var_15 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
