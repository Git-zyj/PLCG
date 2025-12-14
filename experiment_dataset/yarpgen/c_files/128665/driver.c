#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
short var_7 = (short)-28794;
short var_12 = (short)7745;
long long int var_13 = 5733156113445267626LL;
int zero = 0;
unsigned long long int var_14 = 15481768567368167247ULL;
long long int var_15 = -6995757978173499946LL;
void init() {
}

void checksum() {
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
