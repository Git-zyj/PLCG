#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 209212828;
short var_2 = (short)-8504;
short var_3 = (short)-2410;
unsigned int var_4 = 3769336820U;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_6 = 14116035697451280021ULL;
unsigned char var_7 = (unsigned char)55;
int var_8 = 542811819;
short var_9 = (short)-4452;
int zero = 0;
signed char var_10 = (signed char)72;
short var_11 = (short)-18631;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
