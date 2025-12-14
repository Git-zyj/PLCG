#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15564;
unsigned int var_1 = 3800419073U;
signed char var_2 = (signed char)-87;
unsigned char var_3 = (unsigned char)122;
unsigned char var_6 = (unsigned char)125;
short var_7 = (short)-21144;
long long int var_9 = 3494710400924487699LL;
signed char var_10 = (signed char)-53;
int var_11 = 1444278838;
signed char var_13 = (signed char)119;
int zero = 0;
signed char var_14 = (signed char)104;
unsigned char var_15 = (unsigned char)124;
short var_16 = (short)-23834;
short var_17 = (short)28793;
void init() {
}

void checksum() {
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
