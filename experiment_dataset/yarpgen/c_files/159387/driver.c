#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = 1799524707;
unsigned short var_6 = (unsigned short)61964;
_Bool var_11 = (_Bool)0;
int var_13 = -1059603502;
int zero = 0;
int var_15 = -1090850201;
int var_16 = 1879538379;
void init() {
}

void checksum() {
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
