#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14048;
unsigned long long int var_3 = 12491174153985914310ULL;
long long int var_4 = 5626635434034896149LL;
signed char var_6 = (signed char)88;
signed char var_7 = (signed char)-83;
unsigned char var_11 = (unsigned char)75;
short var_12 = (short)-9532;
long long int var_13 = -7040157156075127545LL;
int zero = 0;
unsigned short var_15 = (unsigned short)33143;
unsigned char var_16 = (unsigned char)74;
void init() {
}

void checksum() {
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
