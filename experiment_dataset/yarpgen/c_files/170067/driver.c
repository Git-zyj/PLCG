#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3580784079693015128LL;
long long int var_5 = 1782699462921771369LL;
_Bool var_7 = (_Bool)0;
int var_8 = -245552769;
long long int var_13 = 2192951309587163855LL;
int zero = 0;
int var_15 = 669133147;
unsigned int var_16 = 1295586842U;
void init() {
}

void checksum() {
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
