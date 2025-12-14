#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6805;
_Bool var_3 = (_Bool)0;
int var_6 = -751850929;
short var_14 = (short)19596;
int zero = 0;
unsigned long long int var_18 = 6048254643080604951ULL;
unsigned short var_19 = (unsigned short)13753;
unsigned long long int var_20 = 6324010867156499997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
