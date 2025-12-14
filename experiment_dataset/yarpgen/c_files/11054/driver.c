#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62140;
unsigned char var_2 = (unsigned char)213;
short var_4 = (short)-14332;
unsigned int var_6 = 325771638U;
unsigned short var_8 = (unsigned short)42478;
int var_9 = -1774242857;
unsigned char var_12 = (unsigned char)63;
unsigned long long int var_15 = 7022767214484569574ULL;
short var_18 = (short)13523;
int zero = 0;
unsigned int var_19 = 3772835449U;
unsigned short var_20 = (unsigned short)8700;
short var_21 = (short)-12527;
void init() {
}

void checksum() {
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
