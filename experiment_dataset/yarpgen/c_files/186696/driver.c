#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 148161704;
long long int var_2 = -3999757908693949253LL;
short var_5 = (short)-5976;
int var_6 = 1446268569;
unsigned int var_7 = 1413822236U;
unsigned long long int var_8 = 13215777748484468592ULL;
signed char var_9 = (signed char)99;
unsigned short var_10 = (unsigned short)58311;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
unsigned char var_12 = (unsigned char)157;
unsigned int var_13 = 456909411U;
int var_14 = -1649099262;
unsigned short var_15 = (unsigned short)63044;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
