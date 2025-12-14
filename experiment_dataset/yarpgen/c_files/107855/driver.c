#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_8 = 14519202588628515248ULL;
unsigned long long int var_9 = 129637914434923190ULL;
int var_13 = 1339459670;
signed char var_14 = (signed char)111;
unsigned int var_15 = 3632717784U;
unsigned long long int var_18 = 5724867871689586275ULL;
int zero = 0;
unsigned long long int var_20 = 1810485691041318026ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
