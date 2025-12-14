#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1887703855;
unsigned long long int var_2 = 6031151483589921840ULL;
unsigned short var_6 = (unsigned short)47789;
int var_13 = -1667523427;
unsigned int var_14 = 1092612123U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15069283544076778629ULL;
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
