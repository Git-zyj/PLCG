#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5607515274412252314LL;
long long int var_7 = -5099690389953743569LL;
unsigned long long int var_11 = 12187771086340129149ULL;
short var_13 = (short)-14708;
int zero = 0;
unsigned short var_14 = (unsigned short)29356;
short var_15 = (short)9809;
int var_16 = 954337615;
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
