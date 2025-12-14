#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48194;
unsigned long long int var_8 = 15194129230147306689ULL;
short var_14 = (short)16329;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)1;
unsigned short var_18 = (unsigned short)44446;
void init() {
}

void checksum() {
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
