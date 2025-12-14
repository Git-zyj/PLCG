#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)10039;
unsigned char var_5 = (unsigned char)63;
int var_7 = 1165766965;
unsigned char var_8 = (unsigned char)139;
unsigned int var_10 = 868207889U;
unsigned int var_11 = 1335298111U;
unsigned int var_12 = 1729896959U;
unsigned short var_15 = (unsigned short)48107;
int zero = 0;
unsigned char var_17 = (unsigned char)54;
int var_18 = 1506843453;
short var_19 = (short)-5133;
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
