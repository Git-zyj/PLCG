#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
unsigned char var_1 = (unsigned char)232;
unsigned char var_2 = (unsigned char)100;
short var_3 = (short)-28563;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)121;
unsigned short var_9 = (unsigned short)3501;
unsigned short var_10 = (unsigned short)7792;
short var_13 = (short)-25097;
unsigned char var_14 = (unsigned char)97;
unsigned long long int var_15 = 14155325975149593908ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)88;
signed char var_17 = (signed char)-10;
void init() {
}

void checksum() {
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
