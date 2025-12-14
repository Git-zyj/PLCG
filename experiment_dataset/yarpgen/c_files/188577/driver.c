#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1597100986U;
unsigned char var_5 = (unsigned char)91;
short var_8 = (short)6764;
unsigned short var_9 = (unsigned short)7300;
unsigned short var_12 = (unsigned short)3902;
unsigned char var_13 = (unsigned char)45;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
unsigned short var_18 = (unsigned short)19639;
int var_19 = -1123507567;
unsigned short var_20 = (unsigned short)31852;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
