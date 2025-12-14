#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 253643894;
unsigned long long int var_6 = 15793501335566805396ULL;
short var_8 = (short)21504;
unsigned short var_10 = (unsigned short)6441;
long long int var_13 = -3149120386315165749LL;
long long int var_15 = 1797480241734025043LL;
int zero = 0;
short var_20 = (short)-24852;
int var_21 = 2122001946;
int var_22 = 859816935;
long long int var_23 = 4709686674277847980LL;
long long int var_24 = -2324399938780097499LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
