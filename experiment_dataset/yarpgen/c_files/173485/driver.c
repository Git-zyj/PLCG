#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12435408026126917695ULL;
unsigned long long int var_2 = 866547678550195227ULL;
unsigned char var_3 = (unsigned char)109;
unsigned long long int var_7 = 15976985651592824828ULL;
unsigned long long int var_9 = 1315985730915188610ULL;
unsigned char var_11 = (unsigned char)29;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8153622559114632595LL;
int var_17 = -132838636;
void init() {
}

void checksum() {
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
