#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 1688212126;
long long int var_7 = -6743119034293332888LL;
int var_9 = 1059386905;
int var_14 = -2053773137;
int zero = 0;
int var_18 = -2022880771;
int var_19 = 41323490;
unsigned int var_20 = 3543742487U;
int var_21 = -2058986689;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
