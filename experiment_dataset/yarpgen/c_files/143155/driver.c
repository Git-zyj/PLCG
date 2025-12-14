#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50928;
unsigned short var_5 = (unsigned short)34406;
signed char var_7 = (signed char)-113;
int var_12 = 110534172;
unsigned char var_15 = (unsigned char)229;
int zero = 0;
int var_16 = -440675181;
short var_17 = (short)27832;
void init() {
}

void checksum() {
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
