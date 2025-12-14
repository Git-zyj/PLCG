#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -888030253;
int var_1 = 1479530380;
unsigned short var_2 = (unsigned short)7448;
unsigned short var_3 = (unsigned short)57471;
short var_4 = (short)-6098;
unsigned int var_5 = 2744837301U;
signed char var_6 = (signed char)-101;
unsigned char var_7 = (unsigned char)161;
int var_8 = 170414818;
int zero = 0;
signed char var_13 = (signed char)52;
long long int var_14 = -3230487820001437915LL;
short var_15 = (short)-10727;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
