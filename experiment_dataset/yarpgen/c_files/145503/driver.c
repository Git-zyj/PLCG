#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_3 = -640854078;
int var_5 = 1853873866;
signed char var_8 = (signed char)-64;
int zero = 0;
short var_10 = (short)-15139;
unsigned char var_11 = (unsigned char)59;
unsigned short var_12 = (unsigned short)4147;
int var_13 = 1179798422;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
