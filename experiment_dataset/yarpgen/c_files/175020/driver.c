#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
signed char var_1 = (signed char)-84;
unsigned int var_4 = 1394333271U;
unsigned char var_5 = (unsigned char)80;
unsigned char var_6 = (unsigned char)191;
unsigned short var_8 = (unsigned short)28;
signed char var_9 = (signed char)-50;
unsigned int var_10 = 1651715018U;
unsigned char var_11 = (unsigned char)213;
unsigned char var_12 = (unsigned char)206;
signed char var_13 = (signed char)-96;
unsigned short var_14 = (unsigned short)52273;
int zero = 0;
unsigned char var_15 = (unsigned char)17;
unsigned long long int var_16 = 15497676209703033472ULL;
unsigned char var_17 = (unsigned char)157;
unsigned char var_18 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
