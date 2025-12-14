#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned short var_1 = (unsigned short)16894;
unsigned short var_3 = (unsigned short)23408;
unsigned short var_4 = (unsigned short)34292;
unsigned short var_6 = (unsigned short)13127;
signed char var_7 = (signed char)-123;
signed char var_8 = (signed char)75;
unsigned char var_9 = (unsigned char)134;
unsigned char var_10 = (unsigned char)13;
unsigned short var_11 = (unsigned short)46807;
unsigned char var_12 = (unsigned char)205;
int zero = 0;
unsigned char var_13 = (unsigned char)50;
signed char var_14 = (signed char)-118;
signed char var_15 = (signed char)-25;
unsigned short var_16 = (unsigned short)52418;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
