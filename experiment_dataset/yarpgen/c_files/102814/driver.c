#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_10 = 7264124939895305291LL;
int zero = 0;
unsigned long long int var_11 = 10915556611338916532ULL;
long long int var_12 = -4807629880050321479LL;
long long int var_13 = 4197783350826059566LL;
long long int var_14 = -1402090947258844693LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
