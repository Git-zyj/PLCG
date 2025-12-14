#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -584203040;
signed char var_4 = (signed char)53;
unsigned char var_5 = (unsigned char)242;
unsigned short var_6 = (unsigned short)52757;
unsigned char var_7 = (unsigned char)141;
short var_8 = (short)7685;
int zero = 0;
short var_11 = (short)17076;
unsigned char var_12 = (unsigned char)106;
unsigned char var_13 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
