#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4247031852113491487LL;
unsigned short var_4 = (unsigned short)56922;
unsigned int var_5 = 439982644U;
short var_8 = (short)16810;
int zero = 0;
int var_11 = 549657056;
int var_12 = -1084379482;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
