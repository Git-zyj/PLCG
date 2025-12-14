#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
short var_4 = (short)-19465;
short var_7 = (short)12338;
int var_8 = -713280669;
unsigned int var_10 = 1212206547U;
unsigned short var_11 = (unsigned short)10705;
int var_13 = 1714963475;
int var_14 = 1734454436;
unsigned long long int var_16 = 2040754142434173391ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
int var_18 = 1687384185;
unsigned long long int var_19 = 16260468591660972889ULL;
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
