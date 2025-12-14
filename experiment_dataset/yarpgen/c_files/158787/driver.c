#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14274496139885199659ULL;
short var_5 = (short)-7109;
short var_8 = (short)-4735;
unsigned long long int var_9 = 9483336698949586446ULL;
short var_16 = (short)24876;
int zero = 0;
long long int var_17 = 5994255558291149620LL;
int var_18 = -1831796093;
short var_19 = (short)-10398;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
