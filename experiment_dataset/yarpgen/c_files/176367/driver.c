#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -358087921;
long long int var_3 = -3305280490255044596LL;
unsigned short var_4 = (unsigned short)42643;
long long int var_5 = 2987486624127781382LL;
int var_7 = 238174721;
unsigned short var_8 = (unsigned short)16103;
unsigned short var_9 = (unsigned short)22581;
unsigned short var_11 = (unsigned short)25610;
int var_12 = 104876945;
int var_13 = 523955418;
int var_15 = 185511699;
unsigned char var_16 = (unsigned char)138;
short var_17 = (short)24111;
int zero = 0;
unsigned short var_18 = (unsigned short)35461;
unsigned short var_19 = (unsigned short)37656;
signed char var_20 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
