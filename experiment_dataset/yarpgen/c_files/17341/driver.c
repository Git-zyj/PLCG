#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9492253494969904260ULL;
long long int var_7 = -3928158179900854124LL;
short var_12 = (short)-2999;
int zero = 0;
long long int var_14 = -3286547859778148960LL;
unsigned long long int var_15 = 11960932970332022714ULL;
unsigned int var_16 = 918191774U;
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
