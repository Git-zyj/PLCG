#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6359;
long long int var_2 = -1717521711075201377LL;
int var_3 = 1455186682;
unsigned char var_4 = (unsigned char)76;
unsigned int var_5 = 1642212449U;
int var_7 = 1038709594;
unsigned int var_8 = 1807064103U;
unsigned short var_9 = (unsigned short)15891;
int zero = 0;
int var_10 = -2118255532;
int var_11 = -1452140833;
unsigned char var_12 = (unsigned char)164;
short var_13 = (short)22804;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
