#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13075;
unsigned int var_1 = 2618761457U;
short var_2 = (short)1890;
short var_3 = (short)-12527;
unsigned int var_4 = 1408736987U;
unsigned int var_7 = 2107485512U;
int zero = 0;
unsigned int var_11 = 2490156442U;
long long int var_12 = -1673958905385213115LL;
unsigned int var_13 = 1057565306U;
unsigned short var_14 = (unsigned short)16634;
short var_15 = (short)-17935;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
