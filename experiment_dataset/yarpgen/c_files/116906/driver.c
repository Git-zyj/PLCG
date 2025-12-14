#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -420824721;
unsigned long long int var_5 = 2605691511009210853ULL;
unsigned long long int var_8 = 6411844836751857618ULL;
signed char var_11 = (signed char)-44;
unsigned char var_12 = (unsigned char)51;
unsigned char var_13 = (unsigned char)162;
unsigned short var_15 = (unsigned short)26525;
unsigned char var_16 = (unsigned char)114;
int zero = 0;
int var_17 = 58946294;
unsigned char var_18 = (unsigned char)191;
short var_19 = (short)-4611;
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
