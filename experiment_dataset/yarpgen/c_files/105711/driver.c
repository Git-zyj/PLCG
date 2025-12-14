#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1359981675;
unsigned char var_1 = (unsigned char)148;
signed char var_3 = (signed char)84;
short var_4 = (short)-12033;
signed char var_5 = (signed char)-65;
unsigned long long int var_6 = 9782121144767614482ULL;
unsigned char var_8 = (unsigned char)90;
signed char var_9 = (signed char)101;
unsigned long long int var_10 = 375419743742261239ULL;
unsigned short var_11 = (unsigned short)5040;
unsigned char var_12 = (unsigned char)111;
short var_13 = (short)-23016;
int zero = 0;
unsigned short var_15 = (unsigned short)52507;
int var_16 = 1081383416;
signed char var_17 = (signed char)124;
unsigned short var_18 = (unsigned short)59107;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
