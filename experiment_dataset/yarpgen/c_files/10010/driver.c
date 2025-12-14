#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
short var_1 = (short)25982;
unsigned char var_2 = (unsigned char)87;
unsigned int var_3 = 986763523U;
unsigned int var_5 = 711755824U;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)128;
unsigned int var_10 = 1852225370U;
unsigned int var_11 = 2363886419U;
int zero = 0;
unsigned long long int var_14 = 12942805745721394312ULL;
unsigned int var_15 = 3910441350U;
int var_16 = 603195205;
short var_17 = (short)18579;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
