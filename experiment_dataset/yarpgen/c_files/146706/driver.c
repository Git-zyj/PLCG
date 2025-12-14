#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1601103244;
_Bool var_7 = (_Bool)0;
short var_9 = (short)2907;
short var_10 = (short)-29632;
int zero = 0;
short var_16 = (short)3313;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6610384175659966701LL;
unsigned long long int var_19 = 423101147289411766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
