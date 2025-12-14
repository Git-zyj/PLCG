#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 768956464;
unsigned int var_3 = 2236010295U;
unsigned int var_5 = 1013775497U;
signed char var_11 = (signed char)71;
unsigned long long int var_12 = 14678576682990679279ULL;
int zero = 0;
unsigned int var_14 = 1673854932U;
long long int var_15 = 642428403041838740LL;
int var_16 = -1869349019;
long long int var_17 = 8077360520358220086LL;
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
