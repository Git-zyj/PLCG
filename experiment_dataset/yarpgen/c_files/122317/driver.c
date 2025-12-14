#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1379;
unsigned int var_3 = 1715192080U;
unsigned int var_4 = 3576789884U;
unsigned char var_5 = (unsigned char)152;
unsigned int var_6 = 978055677U;
unsigned int var_7 = 1825861038U;
unsigned int var_8 = 1330023349U;
unsigned int var_9 = 4232656182U;
unsigned int var_10 = 1274121825U;
int zero = 0;
short var_12 = (short)22244;
unsigned char var_13 = (unsigned char)148;
unsigned int var_14 = 3767706183U;
unsigned int var_15 = 1790510428U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
