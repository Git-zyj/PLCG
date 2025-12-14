#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3014307235U;
unsigned long long int var_6 = 3350982342137574544ULL;
short var_7 = (short)29808;
long long int var_8 = 3107138039035752739LL;
int zero = 0;
unsigned long long int var_14 = 15120578660959196308ULL;
short var_15 = (short)-31298;
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
