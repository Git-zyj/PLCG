#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)979;
unsigned long long int var_2 = 453300412236546440ULL;
unsigned short var_3 = (unsigned short)27522;
unsigned int var_5 = 1848985046U;
signed char var_7 = (signed char)-82;
short var_9 = (short)4332;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)37;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)74;
int var_16 = 1176993611;
unsigned char var_17 = (unsigned char)213;
unsigned int var_18 = 2872986851U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
