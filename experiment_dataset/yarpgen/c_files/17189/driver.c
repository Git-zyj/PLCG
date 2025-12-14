#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1076463264U;
short var_4 = (short)-31793;
unsigned long long int var_5 = 15683296792789511240ULL;
_Bool var_6 = (_Bool)1;
long long int var_9 = -5088217717484275511LL;
long long int var_13 = 3771568541197668167LL;
int zero = 0;
unsigned int var_18 = 2987672810U;
int var_19 = 424198844;
short var_20 = (short)-22419;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
