#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned short var_1 = (unsigned short)59292;
unsigned short var_3 = (unsigned short)5656;
unsigned short var_5 = (unsigned short)50525;
int var_6 = -2023174327;
unsigned short var_8 = (unsigned short)44184;
unsigned short var_9 = (unsigned short)64651;
unsigned char var_10 = (unsigned char)97;
int zero = 0;
int var_15 = -1041156368;
unsigned char var_16 = (unsigned char)19;
unsigned char var_17 = (unsigned char)207;
unsigned char var_18 = (unsigned char)33;
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
