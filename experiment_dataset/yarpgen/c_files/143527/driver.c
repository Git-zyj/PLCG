#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56365;
short var_2 = (short)22124;
short var_3 = (short)19147;
short var_4 = (short)4119;
unsigned char var_5 = (unsigned char)47;
unsigned char var_6 = (unsigned char)128;
short var_7 = (short)-8787;
signed char var_8 = (signed char)-84;
short var_10 = (short)26807;
int zero = 0;
int var_11 = -959577929;
int var_12 = 1711021572;
unsigned long long int var_13 = 4913552217213188927ULL;
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
