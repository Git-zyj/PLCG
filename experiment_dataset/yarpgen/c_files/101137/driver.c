#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56955;
int var_3 = 1323399664;
short var_12 = (short)-7338;
long long int var_13 = 1203393620019071440LL;
short var_16 = (short)3309;
int zero = 0;
signed char var_17 = (signed char)45;
unsigned short var_18 = (unsigned short)22785;
signed char var_19 = (signed char)1;
void init() {
}

void checksum() {
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
