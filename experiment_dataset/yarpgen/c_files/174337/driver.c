#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
unsigned short var_3 = (unsigned short)61017;
unsigned long long int var_4 = 14026490219156210658ULL;
unsigned int var_8 = 2735797782U;
unsigned short var_9 = (unsigned short)22791;
unsigned long long int var_11 = 10419472247547032641ULL;
unsigned int var_16 = 4114917688U;
int zero = 0;
short var_17 = (short)-29739;
unsigned char var_18 = (unsigned char)22;
unsigned short var_19 = (unsigned short)56251;
short var_20 = (short)-22431;
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
