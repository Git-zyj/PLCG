#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20499;
unsigned char var_8 = (unsigned char)92;
short var_9 = (short)22103;
short var_10 = (short)-32672;
unsigned char var_12 = (unsigned char)173;
int var_14 = 1660382248;
short var_15 = (short)335;
unsigned char var_18 = (unsigned char)251;
int zero = 0;
int var_20 = -1281568537;
short var_21 = (short)-238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
