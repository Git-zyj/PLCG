#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3263738512399481495LL;
long long int var_4 = 2361662374681086093LL;
int var_5 = -1747988728;
unsigned long long int var_13 = 17469857658564748423ULL;
int zero = 0;
short var_14 = (short)18532;
unsigned int var_15 = 1873977047U;
long long int var_16 = -8141522849338170268LL;
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
