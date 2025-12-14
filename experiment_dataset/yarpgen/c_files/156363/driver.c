#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2325172450332713300ULL;
long long int var_7 = 3187284850240080592LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_16 = -1175023661;
long long int var_17 = 2269588573700987564LL;
unsigned long long int var_18 = 9017305085981871293ULL;
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
