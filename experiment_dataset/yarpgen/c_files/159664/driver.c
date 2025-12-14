#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14539675574706038455ULL;
short var_6 = (short)29736;
signed char var_7 = (signed char)66;
int var_11 = -1137411991;
int var_12 = -1580166977;
unsigned long long int var_14 = 18099695403231497181ULL;
int zero = 0;
signed char var_16 = (signed char)-64;
int var_17 = -1755348958;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
