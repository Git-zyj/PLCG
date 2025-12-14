#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1620026924U;
unsigned int var_9 = 4145504032U;
unsigned char var_16 = (unsigned char)6;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
int var_20 = -1669346211;
short var_21 = (short)-5337;
unsigned short var_22 = (unsigned short)2896;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
