#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3058;
signed char var_1 = (signed char)73;
unsigned short var_2 = (unsigned short)23390;
signed char var_3 = (signed char)117;
signed char var_4 = (signed char)114;
int var_5 = 485810593;
int var_6 = -17134215;
unsigned char var_7 = (unsigned char)230;
unsigned int var_8 = 1511446877U;
int zero = 0;
unsigned short var_12 = (unsigned short)4359;
unsigned short var_13 = (unsigned short)18719;
unsigned char var_14 = (unsigned char)116;
unsigned short var_15 = (unsigned short)49623;
long long int var_16 = 7484870698827483263LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
