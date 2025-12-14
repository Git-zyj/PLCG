#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 602370772731351782ULL;
unsigned short var_1 = (unsigned short)22726;
long long int var_2 = -664583810600159896LL;
unsigned short var_3 = (unsigned short)24265;
signed char var_4 = (signed char)-53;
unsigned int var_5 = 581687250U;
unsigned int var_6 = 1173309881U;
int var_10 = 1142610359;
short var_12 = (short)-26002;
unsigned short var_13 = (unsigned short)60032;
int zero = 0;
unsigned char var_14 = (unsigned char)248;
long long int var_15 = 3828691779634183562LL;
signed char var_16 = (signed char)-86;
void init() {
}

void checksum() {
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
