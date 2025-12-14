#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 4621995448269853633ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)29576;
unsigned long long int var_8 = 16220023904325357532ULL;
unsigned int var_9 = 3355916931U;
signed char var_10 = (signed char)-119;
int zero = 0;
long long int var_11 = 7181309707932199012LL;
unsigned short var_12 = (unsigned short)44466;
signed char var_13 = (signed char)102;
signed char var_14 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
