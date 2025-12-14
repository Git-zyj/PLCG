#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2778309447639370330LL;
int var_1 = 1610351495;
unsigned char var_2 = (unsigned char)201;
long long int var_6 = 1877916862333740951LL;
long long int var_7 = -1627403563992277619LL;
unsigned char var_9 = (unsigned char)48;
int var_11 = 1665463076;
unsigned char var_13 = (unsigned char)234;
int zero = 0;
int var_14 = 1917509676;
int var_15 = -1567423833;
int var_16 = -1772853749;
unsigned char var_17 = (unsigned char)239;
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
