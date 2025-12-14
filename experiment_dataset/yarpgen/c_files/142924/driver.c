#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)73;
int var_6 = 1588900928;
unsigned char var_7 = (unsigned char)206;
int var_8 = -17704517;
unsigned short var_9 = (unsigned short)28743;
unsigned short var_12 = (unsigned short)24366;
unsigned char var_14 = (unsigned char)214;
int zero = 0;
int var_16 = 49101142;
short var_17 = (short)-5466;
unsigned char var_18 = (unsigned char)168;
short var_19 = (short)-4220;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
