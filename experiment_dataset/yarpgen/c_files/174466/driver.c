#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1105998140U;
unsigned int var_2 = 1562019021U;
short var_3 = (short)-32194;
short var_4 = (short)18369;
short var_5 = (short)-2572;
unsigned char var_8 = (unsigned char)115;
long long int var_9 = -882834423337323524LL;
int zero = 0;
int var_10 = 1159937865;
unsigned char var_11 = (unsigned char)163;
short var_12 = (short)-18457;
long long int var_13 = -5522828152724889081LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
