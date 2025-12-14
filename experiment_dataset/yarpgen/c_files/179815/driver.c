#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6534399772084203285LL;
unsigned long long int var_14 = 658336658262892202ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1255986428U;
long long int var_18 = 5747597036198001805LL;
void init() {
}

void checksum() {
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
