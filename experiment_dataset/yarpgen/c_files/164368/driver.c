#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10715445290214414016ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6674260867081129577LL;
long long int var_16 = 7780790342531858549LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
