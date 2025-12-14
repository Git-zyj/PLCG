#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1795856997;
long long int var_1 = 5242235104328259643LL;
unsigned long long int var_4 = 1475971997474833657ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_10 = (short)16498;
int zero = 0;
long long int var_11 = 2278820689067041611LL;
int var_12 = 1917930065;
unsigned int var_13 = 2917890915U;
unsigned char var_14 = (unsigned char)229;
short var_15 = (short)22340;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
