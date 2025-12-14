#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2220271428057309457LL;
unsigned long long int var_6 = 1204352529126296453ULL;
long long int var_10 = -2026141835233540750LL;
int var_14 = 2064975620;
int zero = 0;
int var_16 = -320968686;
long long int var_17 = 3847328447830141641LL;
unsigned short var_18 = (unsigned short)12502;
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
