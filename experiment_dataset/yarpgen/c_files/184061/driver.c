#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)19145;
int var_11 = -470121802;
unsigned short var_13 = (unsigned short)46672;
unsigned char var_14 = (unsigned char)75;
int zero = 0;
unsigned int var_18 = 3374193684U;
unsigned short var_19 = (unsigned short)40200;
unsigned short var_20 = (unsigned short)10344;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
