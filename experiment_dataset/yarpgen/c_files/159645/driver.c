#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 246296898;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-3730;
short var_7 = (short)-108;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 429817279U;
unsigned int var_10 = 1729900286U;
int zero = 0;
unsigned long long int var_11 = 9679490490789513421ULL;
unsigned int var_12 = 669906057U;
long long int var_13 = -4662242832202136742LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
