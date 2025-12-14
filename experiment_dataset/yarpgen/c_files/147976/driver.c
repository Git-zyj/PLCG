#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4144023595972604090LL;
_Bool var_6 = (_Bool)1;
unsigned short var_12 = (unsigned short)29459;
unsigned long long int var_15 = 12747916388416322823ULL;
int zero = 0;
short var_16 = (short)32524;
_Bool var_17 = (_Bool)0;
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
