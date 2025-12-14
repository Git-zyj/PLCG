#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -168048652285201630LL;
int var_1 = -1204943469;
short var_5 = (short)14747;
signed char var_7 = (signed char)31;
short var_12 = (short)17970;
unsigned short var_13 = (unsigned short)43070;
int zero = 0;
unsigned int var_16 = 1406637446U;
unsigned char var_17 = (unsigned char)221;
unsigned short var_18 = (unsigned short)53325;
short var_19 = (short)24226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
