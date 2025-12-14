#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1714914529;
unsigned char var_4 = (unsigned char)1;
unsigned short var_10 = (unsigned short)59061;
short var_17 = (short)18414;
int zero = 0;
unsigned short var_20 = (unsigned short)11242;
int var_21 = 1889315297;
unsigned short var_22 = (unsigned short)24872;
unsigned short var_23 = (unsigned short)27519;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
