#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_7 = 697581655U;
unsigned short var_14 = (unsigned short)12428;
signed char var_15 = (signed char)-6;
int zero = 0;
unsigned long long int var_16 = 15392302772385550758ULL;
long long int var_17 = -5926566519767853211LL;
void init() {
}

void checksum() {
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
