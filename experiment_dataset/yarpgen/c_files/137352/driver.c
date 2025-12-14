#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_6 = -999853362;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 5342593657329419947ULL;
unsigned long long int var_13 = 8196321508543001188ULL;
int var_14 = -843135274;
void init() {
}

void checksum() {
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
