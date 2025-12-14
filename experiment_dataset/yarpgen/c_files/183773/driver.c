#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2039155893;
short var_1 = (short)-1640;
unsigned short var_5 = (unsigned short)8052;
unsigned char var_8 = (unsigned char)229;
int var_11 = -1361263244;
unsigned short var_12 = (unsigned short)35672;
int zero = 0;
unsigned char var_13 = (unsigned char)77;
unsigned short var_14 = (unsigned short)34435;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
