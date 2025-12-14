#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2406105844470779394LL;
long long int var_8 = -8271712870151916529LL;
long long int var_10 = -2809687005325255374LL;
long long int var_12 = -3655100184921520865LL;
long long int var_13 = -824262926164293276LL;
long long int var_14 = -2365440610175788798LL;
int zero = 0;
long long int var_15 = -79523501077767801LL;
long long int var_16 = 8283584619600671584LL;
void init() {
}

void checksum() {
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
