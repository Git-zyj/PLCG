#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1742933079;
long long int var_2 = -2762869577966005628LL;
_Bool var_5 = (_Bool)0;
int var_6 = 396499150;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 2137924715;
long long int var_14 = 6723378436803483058LL;
void init() {
}

void checksum() {
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
