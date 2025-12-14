#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 75535975;
long long int var_11 = -4323469769374994927LL;
long long int var_13 = -7187676068199523581LL;
short var_16 = (short)-11003;
int zero = 0;
long long int var_18 = 5740253187673231116LL;
long long int var_19 = 7469424701743547887LL;
void init() {
}

void checksum() {
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
