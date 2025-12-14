#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4079;
unsigned short var_5 = (unsigned short)57832;
unsigned char var_8 = (unsigned char)212;
unsigned char var_9 = (unsigned char)235;
unsigned short var_10 = (unsigned short)24018;
int zero = 0;
unsigned int var_15 = 940786745U;
long long int var_16 = 2501689978585758020LL;
unsigned int var_17 = 854291931U;
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
