#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7077979270949475661ULL;
unsigned long long int var_4 = 3376840596499812175ULL;
unsigned long long int var_7 = 10701130699729041337ULL;
int var_8 = -129067637;
unsigned short var_9 = (unsigned short)12101;
int zero = 0;
int var_11 = -1467583690;
int var_12 = 642536179;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
