#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
int var_2 = 574234745;
unsigned short var_3 = (unsigned short)59118;
unsigned int var_4 = 1040225986U;
unsigned short var_6 = (unsigned short)58984;
unsigned short var_7 = (unsigned short)45936;
int var_8 = 921687595;
signed char var_11 = (signed char)-14;
unsigned short var_12 = (unsigned short)32296;
unsigned long long int var_13 = 6537658776074674835ULL;
int var_14 = -1445287342;
unsigned char var_15 = (unsigned char)184;
int zero = 0;
unsigned char var_17 = (unsigned char)27;
unsigned char var_18 = (unsigned char)35;
unsigned int var_19 = 1788787952U;
unsigned char var_20 = (unsigned char)42;
long long int var_21 = 7273655834396037651LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
