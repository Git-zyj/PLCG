#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)843;
int var_2 = -625176122;
int var_3 = -734706465;
int var_4 = 1592399144;
short var_5 = (short)-32173;
unsigned short var_7 = (unsigned short)61905;
short var_8 = (short)32220;
int var_10 = 1032269001;
int zero = 0;
unsigned int var_12 = 644825755U;
int var_13 = 2127008529;
unsigned char var_14 = (unsigned char)175;
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
