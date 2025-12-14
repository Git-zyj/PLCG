#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17101;
unsigned char var_1 = (unsigned char)254;
unsigned char var_4 = (unsigned char)128;
short var_5 = (short)11137;
short var_10 = (short)11843;
unsigned char var_13 = (unsigned char)82;
unsigned char var_15 = (unsigned char)140;
unsigned char var_17 = (unsigned char)141;
signed char var_18 = (signed char)114;
int zero = 0;
unsigned short var_20 = (unsigned short)6201;
unsigned char var_21 = (unsigned char)146;
short var_22 = (short)-11695;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
