#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12962051460681722403ULL;
short var_7 = (short)-13620;
short var_12 = (short)-19436;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8680772405607260004LL;
int var_18 = 1792089190;
unsigned long long int var_19 = 3024134314370080935ULL;
unsigned short var_20 = (unsigned short)51068;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
