#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20049;
int var_1 = 1877034982;
int var_3 = -1680751266;
unsigned short var_4 = (unsigned short)37565;
int var_5 = 295853990;
int var_6 = 1471345124;
int var_7 = 1029881980;
unsigned short var_9 = (unsigned short)43343;
int var_10 = 1732961223;
int var_11 = 1434881907;
int zero = 0;
unsigned short var_12 = (unsigned short)51881;
unsigned short var_13 = (unsigned short)19971;
int var_14 = -2043081892;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
