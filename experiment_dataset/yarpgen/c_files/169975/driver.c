#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 884065807;
short var_3 = (short)-14265;
unsigned short var_4 = (unsigned short)64435;
unsigned char var_5 = (unsigned char)175;
unsigned short var_6 = (unsigned short)34969;
long long int var_9 = 5088976276521223987LL;
unsigned short var_10 = (unsigned short)24885;
int zero = 0;
unsigned short var_11 = (unsigned short)63799;
short var_12 = (short)22744;
short var_13 = (short)15327;
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
