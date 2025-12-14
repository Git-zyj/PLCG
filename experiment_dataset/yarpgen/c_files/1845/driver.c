#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned char var_1 = (unsigned char)190;
unsigned short var_2 = (unsigned short)14653;
unsigned char var_3 = (unsigned char)136;
unsigned char var_6 = (unsigned char)19;
unsigned char var_8 = (unsigned char)69;
unsigned char var_11 = (unsigned char)7;
unsigned short var_13 = (unsigned short)5777;
unsigned short var_14 = (unsigned short)62936;
unsigned short var_15 = (unsigned short)44025;
unsigned short var_16 = (unsigned short)18707;
unsigned char var_17 = (unsigned char)84;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
unsigned char var_21 = (unsigned char)178;
unsigned short var_22 = (unsigned short)49731;
unsigned char var_23 = (unsigned char)69;
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
