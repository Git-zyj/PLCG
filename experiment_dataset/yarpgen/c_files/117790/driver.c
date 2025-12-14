#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_15 = 1366735388819222790ULL;
long long int var_16 = 8830411294107793399LL;
unsigned int var_17 = 573187955U;
unsigned short var_18 = (unsigned short)9724;
unsigned int var_19 = 2994805144U;
unsigned int var_20 = 2270812763U;
unsigned long long int var_21 = 14570454452248431222ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
