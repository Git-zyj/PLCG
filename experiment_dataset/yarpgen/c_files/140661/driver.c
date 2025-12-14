#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
int var_7 = -1946992142;
unsigned int var_14 = 2375221434U;
short var_15 = (short)7035;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)173;
unsigned char var_19 = (unsigned char)235;
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
