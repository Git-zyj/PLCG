#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1341050255U;
short var_9 = (short)-8481;
int var_10 = 855623200;
int zero = 0;
long long int var_14 = 2783170186317972775LL;
short var_15 = (short)-17570;
unsigned int var_16 = 3774027246U;
long long int var_17 = 6759372676023359858LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
