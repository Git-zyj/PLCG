#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2832818283526585154LL;
unsigned int var_3 = 872746935U;
unsigned int var_4 = 3961272935U;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8938446666946132764LL;
int zero = 0;
long long int var_14 = -7677461679063190088LL;
long long int var_15 = 8280741766614919067LL;
void init() {
}

void checksum() {
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
