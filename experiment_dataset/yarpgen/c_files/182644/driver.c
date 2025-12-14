#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7628783420505175530LL;
short var_2 = (short)-27876;
long long int var_5 = 2693662426922688312LL;
long long int var_7 = 7856045138853998674LL;
long long int var_8 = -5175250249298312922LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-19;
int zero = 0;
signed char var_15 = (signed char)-112;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7215191854511480047LL;
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
