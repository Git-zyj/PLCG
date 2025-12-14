#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15175166931218255813ULL;
unsigned long long int var_3 = 7399472912350942273ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17941028187548592201ULL;
int zero = 0;
unsigned long long int var_15 = 9124917616017185782ULL;
unsigned long long int var_16 = 9829035424283102585ULL;
unsigned long long int var_17 = 6268589173819863642ULL;
unsigned int var_18 = 1781729726U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
