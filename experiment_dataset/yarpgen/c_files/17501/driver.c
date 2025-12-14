#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 652499977;
unsigned int var_8 = 2355945206U;
unsigned short var_11 = (unsigned short)14093;
unsigned short var_14 = (unsigned short)3250;
int zero = 0;
short var_15 = (short)9329;
short var_16 = (short)-23854;
signed char var_17 = (signed char)-21;
void init() {
}

void checksum() {
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
