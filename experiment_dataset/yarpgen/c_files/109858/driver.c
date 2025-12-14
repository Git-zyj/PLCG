#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6263175700751198406ULL;
_Bool var_3 = (_Bool)0;
int var_5 = 1166911042;
short var_6 = (short)32329;
int var_9 = 907437092;
unsigned long long int var_13 = 14002919222605517883ULL;
unsigned long long int var_14 = 117237062600918497ULL;
int zero = 0;
short var_17 = (short)23975;
int var_18 = -424901301;
int var_19 = -1297671751;
unsigned long long int var_20 = 2986635060786672609ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
