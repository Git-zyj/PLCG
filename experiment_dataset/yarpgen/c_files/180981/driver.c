#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7317025810523179166ULL;
signed char var_2 = (signed char)-127;
unsigned char var_3 = (unsigned char)132;
unsigned short var_4 = (unsigned short)42885;
int var_5 = 1702729035;
unsigned short var_6 = (unsigned short)22872;
unsigned int var_9 = 716478096U;
int zero = 0;
short var_11 = (short)12198;
unsigned char var_12 = (unsigned char)76;
unsigned short var_13 = (unsigned short)57372;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
