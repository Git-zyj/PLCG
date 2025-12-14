#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)132;
signed char var_9 = (signed char)-64;
short var_12 = (short)4495;
unsigned short var_15 = (unsigned short)33656;
unsigned long long int var_17 = 9751539935937392072ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)2682;
short var_20 = (short)-1342;
void init() {
}

void checksum() {
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
