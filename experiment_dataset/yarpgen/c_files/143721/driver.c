#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30985;
unsigned int var_6 = 351234876U;
int var_8 = -847360504;
int var_9 = 30878644;
unsigned char var_11 = (unsigned char)170;
unsigned int var_13 = 167068694U;
unsigned short var_14 = (unsigned short)8005;
int zero = 0;
unsigned int var_15 = 1807698942U;
unsigned short var_16 = (unsigned short)30761;
void init() {
}

void checksum() {
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
