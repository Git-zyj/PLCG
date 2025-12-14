#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5623025752192024621ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 4059658102U;
short var_8 = (short)18895;
unsigned short var_9 = (unsigned short)5570;
unsigned int var_10 = 3784733288U;
unsigned int var_11 = 929487404U;
short var_12 = (short)-2168;
int zero = 0;
unsigned int var_13 = 928594885U;
unsigned short var_14 = (unsigned short)51209;
unsigned char var_15 = (unsigned char)103;
short var_16 = (short)9551;
unsigned short var_17 = (unsigned short)55059;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
