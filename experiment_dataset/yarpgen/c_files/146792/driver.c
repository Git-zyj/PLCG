#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1239842034;
unsigned int var_14 = 748148394U;
short var_17 = (short)-4468;
int var_18 = -1106908497;
int zero = 0;
unsigned long long int var_19 = 14662651751942277288ULL;
unsigned long long int var_20 = 6378786273759254415ULL;
int var_21 = 1781005753;
int var_22 = -756587266;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
