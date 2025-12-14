#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 538593838;
unsigned char var_4 = (unsigned char)115;
unsigned short var_7 = (unsigned short)52059;
unsigned short var_11 = (unsigned short)62915;
unsigned short var_12 = (unsigned short)27066;
int var_14 = -396509982;
unsigned short var_16 = (unsigned short)47035;
unsigned long long int var_17 = 5875413178472286047ULL;
unsigned short var_19 = (unsigned short)6447;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned int var_21 = 732674212U;
unsigned long long int var_22 = 8873059551656738714ULL;
short var_23 = (short)-29084;
short var_24 = (short)30220;
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
