#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3517489493044537935ULL;
unsigned long long int var_9 = 13978322901179274530ULL;
int var_12 = 369893403;
int zero = 0;
signed char var_17 = (signed char)122;
long long int var_18 = -827344886765906097LL;
void init() {
}

void checksum() {
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
