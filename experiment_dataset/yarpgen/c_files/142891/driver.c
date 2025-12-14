#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1335204559;
unsigned long long int var_2 = 16052979737062356473ULL;
signed char var_3 = (signed char)119;
short var_4 = (short)8812;
unsigned int var_5 = 1673070436U;
unsigned short var_6 = (unsigned short)2769;
unsigned int var_7 = 749948429U;
unsigned int var_8 = 1679914416U;
int zero = 0;
unsigned short var_11 = (unsigned short)3717;
unsigned short var_12 = (unsigned short)19063;
int var_13 = 894082583;
int var_14 = -1196946627;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
