#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned char var_3 = (unsigned char)164;
int var_5 = 2003623641;
unsigned char var_6 = (unsigned char)141;
int var_13 = 1120382866;
long long int var_14 = -8130788752499876320LL;
int zero = 0;
int var_16 = 186706201;
long long int var_17 = -5237962916479178095LL;
long long int var_18 = -6620052913770658028LL;
void init() {
}

void checksum() {
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
