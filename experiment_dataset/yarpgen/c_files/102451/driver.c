#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8039133502033920387LL;
signed char var_3 = (signed char)-45;
unsigned char var_4 = (unsigned char)206;
short var_6 = (short)-30301;
int var_7 = 1654466129;
long long int var_9 = 2533659160269076639LL;
long long int var_11 = -2259179910535358184LL;
unsigned char var_12 = (unsigned char)169;
int var_13 = -1702691353;
unsigned char var_15 = (unsigned char)87;
int zero = 0;
int var_16 = -585025825;
int var_17 = -1404080105;
unsigned int var_18 = 1783092759U;
unsigned char var_19 = (unsigned char)144;
int var_20 = -1408911764;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
