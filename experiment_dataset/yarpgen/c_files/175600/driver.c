#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -266634348;
unsigned int var_6 = 1301422790U;
signed char var_7 = (signed char)56;
unsigned short var_11 = (unsigned short)22741;
int zero = 0;
int var_12 = -1735802650;
int var_13 = -2130353267;
long long int var_14 = -1818228729761861928LL;
int var_15 = 1951726093;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
