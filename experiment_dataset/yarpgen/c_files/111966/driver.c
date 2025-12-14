#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7876116248246242800ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 12795689754425165777ULL;
unsigned int var_6 = 3855776300U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-20438;
int var_15 = -1642246481;
unsigned long long int var_16 = 3325409001877843412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
