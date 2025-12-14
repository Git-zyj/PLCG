#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4691;
unsigned short var_3 = (unsigned short)25347;
unsigned short var_6 = (unsigned short)16143;
unsigned short var_7 = (unsigned short)4169;
long long int var_8 = 3872913849550557323LL;
int var_9 = 1068474891;
signed char var_10 = (signed char)52;
int zero = 0;
unsigned char var_12 = (unsigned char)254;
signed char var_13 = (signed char)12;
signed char var_14 = (signed char)(-127 - 1);
unsigned char var_15 = (unsigned char)108;
short var_16 = (short)6229;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
