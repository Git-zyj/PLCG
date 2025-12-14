#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
unsigned char var_1 = (unsigned char)179;
unsigned char var_2 = (unsigned char)75;
int var_4 = -928316175;
unsigned char var_6 = (unsigned char)238;
unsigned char var_9 = (unsigned char)195;
unsigned short var_18 = (unsigned short)24892;
int zero = 0;
short var_20 = (short)-28258;
short var_21 = (short)-21040;
int var_22 = -108288886;
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
