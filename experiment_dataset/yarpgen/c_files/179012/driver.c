#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8568;
int var_5 = 1051256045;
unsigned long long int var_9 = 9339273841375540471ULL;
int var_11 = 573034282;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_16 = 619365018;
short var_17 = (short)9590;
void init() {
}

void checksum() {
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
