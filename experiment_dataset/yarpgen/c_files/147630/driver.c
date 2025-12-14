#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
int var_5 = -2075914106;
unsigned char var_6 = (unsigned char)176;
int var_8 = 1204423540;
unsigned short var_10 = (unsigned short)52311;
int var_13 = -1018478784;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
short var_15 = (short)-15523;
signed char var_16 = (signed char)29;
signed char var_17 = (signed char)32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
