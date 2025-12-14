#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
unsigned short var_6 = (unsigned short)47597;
long long int var_10 = -7779851319522096806LL;
short var_11 = (short)-31863;
unsigned int var_16 = 1471180253U;
long long int var_17 = 4425641901792684160LL;
short var_18 = (short)-28746;
int zero = 0;
unsigned short var_19 = (unsigned short)29974;
int var_20 = 1822511368;
unsigned int var_21 = 3401629068U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
