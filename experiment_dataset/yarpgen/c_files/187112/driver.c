#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1245565335;
long long int var_6 = 7347143185878073960LL;
long long int var_11 = -3615733479263824277LL;
long long int var_14 = 6142745283312054640LL;
signed char var_15 = (signed char)-104;
int var_16 = 460751036;
int zero = 0;
int var_17 = -1475193166;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
