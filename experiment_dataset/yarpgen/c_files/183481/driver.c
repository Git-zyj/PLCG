#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15428845389325185563ULL;
short var_10 = (short)7274;
int zero = 0;
unsigned long long int var_16 = 45384384664727558ULL;
unsigned int var_17 = 1369752767U;
long long int var_18 = -3482856012698710174LL;
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
