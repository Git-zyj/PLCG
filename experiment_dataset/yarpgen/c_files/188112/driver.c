#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16062;
int var_3 = 1290228158;
unsigned char var_10 = (unsigned char)2;
unsigned short var_13 = (unsigned short)44044;
int zero = 0;
short var_17 = (short)5581;
unsigned char var_18 = (unsigned char)119;
int var_19 = -342659470;
void init() {
}

void checksum() {
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
