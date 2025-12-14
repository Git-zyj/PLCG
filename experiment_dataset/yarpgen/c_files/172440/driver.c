#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2553;
unsigned long long int var_4 = 10010986973179983106ULL;
int var_5 = 885920408;
unsigned short var_6 = (unsigned short)37866;
unsigned char var_7 = (unsigned char)246;
unsigned short var_10 = (unsigned short)43489;
unsigned char var_11 = (unsigned char)75;
short var_13 = (short)6059;
unsigned char var_17 = (unsigned char)254;
int zero = 0;
int var_18 = 1497825539;
int var_19 = -1551037651;
signed char var_20 = (signed char)16;
unsigned int var_21 = 3223713823U;
unsigned short var_22 = (unsigned short)31949;
unsigned int var_23 = 1942572370U;
unsigned char var_24 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
