#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned long long int var_2 = 522824805476737669ULL;
unsigned long long int var_3 = 17357826689975065212ULL;
int var_7 = -625609176;
unsigned char var_12 = (unsigned char)176;
int zero = 0;
unsigned short var_15 = (unsigned short)37429;
int var_16 = -14610799;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
