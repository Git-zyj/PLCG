#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -476633312;
int var_5 = -824122742;
unsigned char var_6 = (unsigned char)224;
unsigned char var_8 = (unsigned char)103;
int var_10 = 119738999;
unsigned short var_15 = (unsigned short)37725;
int zero = 0;
unsigned short var_20 = (unsigned short)56111;
int var_21 = 155191133;
unsigned short var_22 = (unsigned short)25266;
void init() {
}

void checksum() {
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
