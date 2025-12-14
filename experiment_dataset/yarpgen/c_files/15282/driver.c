#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1281845306;
unsigned short var_8 = (unsigned short)8532;
unsigned short var_12 = (unsigned short)38957;
int var_16 = -754186695;
unsigned char var_17 = (unsigned char)80;
int zero = 0;
unsigned int var_20 = 3545043672U;
short var_21 = (short)10631;
unsigned short var_22 = (unsigned short)20167;
unsigned char var_23 = (unsigned char)192;
unsigned short var_24 = (unsigned short)9815;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
