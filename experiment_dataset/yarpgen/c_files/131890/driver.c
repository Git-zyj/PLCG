#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28435;
unsigned char var_1 = (unsigned char)8;
long long int var_3 = -7245142178715719485LL;
unsigned int var_10 = 3000383293U;
unsigned short var_16 = (unsigned short)58383;
int zero = 0;
unsigned int var_19 = 473335129U;
unsigned short var_20 = (unsigned short)45621;
short var_21 = (short)-30226;
void init() {
}

void checksum() {
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
