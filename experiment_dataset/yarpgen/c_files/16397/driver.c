#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10973;
unsigned int var_1 = 3404570001U;
unsigned int var_4 = 2563583488U;
_Bool var_7 = (_Bool)1;
int var_9 = 1632593874;
unsigned long long int var_10 = 6207614134418747376ULL;
int var_11 = -235564443;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-19388;
unsigned char var_14 = (unsigned char)237;
signed char var_15 = (signed char)-84;
unsigned short var_16 = (unsigned short)3181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
