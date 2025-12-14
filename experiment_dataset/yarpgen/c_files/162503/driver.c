#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
int var_3 = 1848631776;
int var_4 = 1761676792;
int var_6 = 1419449745;
unsigned char var_7 = (unsigned char)16;
short var_8 = (short)1970;
signed char var_9 = (signed char)-90;
int var_10 = -1773752436;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_17 = (short)-23730;
int var_18 = -1876625937;
unsigned char var_19 = (unsigned char)184;
unsigned char var_20 = (unsigned char)168;
short var_21 = (short)-6133;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
