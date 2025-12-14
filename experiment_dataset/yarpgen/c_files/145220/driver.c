#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4770191682655212020LL;
long long int var_10 = -5642957545260728553LL;
signed char var_11 = (signed char)9;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = -1763748058743673059LL;
int var_15 = 418717321;
signed char var_16 = (signed char)62;
unsigned short var_17 = (unsigned short)50524;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
