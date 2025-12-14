#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 372891368;
int var_5 = -525405881;
short var_8 = (short)-18485;
unsigned long long int var_13 = 14718146207577458084ULL;
unsigned long long int var_15 = 2008181828357068527ULL;
int zero = 0;
unsigned long long int var_19 = 9142273088509256676ULL;
long long int var_20 = -2724445967251176071LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
