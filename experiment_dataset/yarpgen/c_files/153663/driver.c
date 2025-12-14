#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2136751682U;
unsigned short var_6 = (unsigned short)62639;
short var_9 = (short)7986;
unsigned char var_10 = (unsigned char)186;
unsigned short var_11 = (unsigned short)56051;
int var_13 = 1105391987;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
signed char var_18 = (signed char)-24;
unsigned short var_19 = (unsigned short)42972;
unsigned int var_20 = 2086783940U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
