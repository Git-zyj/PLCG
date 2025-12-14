#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_8 = -1678868024;
signed char var_12 = (signed char)-23;
signed char var_15 = (signed char)-49;
int zero = 0;
short var_19 = (short)31152;
unsigned char var_20 = (unsigned char)131;
unsigned int var_21 = 1285076004U;
void init() {
}

void checksum() {
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
