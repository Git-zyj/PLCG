#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 461789370U;
unsigned char var_1 = (unsigned char)72;
short var_5 = (short)846;
long long int var_9 = -6706784044595173443LL;
long long int var_11 = -3105989008447266248LL;
int zero = 0;
long long int var_12 = -6238685256441689562LL;
short var_13 = (short)28308;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
