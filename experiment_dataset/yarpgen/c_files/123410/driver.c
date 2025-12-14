#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 1506725197839526851LL;
long long int var_6 = 548140045728960065LL;
long long int var_15 = 2757879090446264255LL;
int zero = 0;
int var_16 = -929752621;
short var_17 = (short)-18867;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-14378;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
