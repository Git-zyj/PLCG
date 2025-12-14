#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-108;
long long int var_8 = 3989072187164943146LL;
long long int var_10 = -520025151065369689LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)25213;
short var_16 = (short)20965;
short var_17 = (short)-19801;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
