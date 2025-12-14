#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12983261302176397916ULL;
unsigned char var_3 = (unsigned char)248;
short var_4 = (short)-17054;
signed char var_6 = (signed char)-48;
int var_8 = 308292426;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)52128;
unsigned short var_13 = (unsigned short)35516;
unsigned char var_14 = (unsigned char)108;
unsigned short var_15 = (unsigned short)54299;
unsigned long long int var_16 = 1298021901485170903ULL;
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
