#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_7 = (unsigned short)16933;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)38643;
unsigned short var_14 = (unsigned short)24915;
int zero = 0;
long long int var_15 = 6476061814059396407LL;
unsigned short var_16 = (unsigned short)50568;
int var_17 = -334234854;
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
