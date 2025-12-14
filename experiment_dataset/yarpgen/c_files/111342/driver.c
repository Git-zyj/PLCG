#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1122325214954570431LL;
long long int var_11 = -1890902623944636447LL;
long long int var_12 = 5167199401368924580LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-80;
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
