#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1969743112;
unsigned int var_1 = 2883632999U;
signed char var_3 = (signed char)114;
unsigned char var_5 = (unsigned char)186;
signed char var_6 = (signed char)57;
int var_7 = 781517000;
unsigned int var_8 = 2255576868U;
unsigned char var_9 = (unsigned char)173;
unsigned char var_10 = (unsigned char)230;
int var_12 = -1447833746;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
int var_14 = -1628542638;
unsigned char var_15 = (unsigned char)12;
int var_16 = 1593649329;
unsigned int var_17 = 3624424967U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
