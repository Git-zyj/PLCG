#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_9 = (short)3331;
unsigned int var_12 = 3518586879U;
long long int var_14 = 6619332664647609053LL;
int zero = 0;
unsigned long long int var_15 = 18135519745540253470ULL;
unsigned short var_16 = (unsigned short)46488;
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
