#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3468675526291560296ULL;
short var_1 = (short)-28022;
unsigned short var_2 = (unsigned short)33271;
int var_3 = 835098553;
long long int var_4 = -7084521812734710917LL;
unsigned char var_8 = (unsigned char)44;
unsigned long long int var_9 = 9511294500759797767ULL;
unsigned char var_10 = (unsigned char)45;
int var_11 = -1683184050;
int var_12 = -1200568665;
int zero = 0;
unsigned short var_17 = (unsigned short)19110;
unsigned long long int var_18 = 8444605667340684900ULL;
unsigned int var_19 = 2257210883U;
unsigned char var_20 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
