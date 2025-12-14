#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)168;
int var_4 = 1235267817;
int var_6 = 1330253400;
_Bool var_10 = (_Bool)1;
short var_12 = (short)22094;
int var_13 = 629077552;
unsigned long long int var_14 = 15834579610904771081ULL;
unsigned char var_15 = (unsigned char)144;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)20004;
short var_21 = (short)-17987;
unsigned long long int var_22 = 484796970981578831ULL;
long long int var_23 = -5736486382575493311LL;
long long int var_24 = -2637664122268504484LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
