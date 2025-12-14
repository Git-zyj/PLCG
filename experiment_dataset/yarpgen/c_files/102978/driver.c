#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 907805835;
unsigned int var_4 = 1694335811U;
unsigned long long int var_7 = 9055301794771569967ULL;
unsigned long long int var_8 = 16748086981586622899ULL;
unsigned int var_10 = 3525013613U;
unsigned char var_11 = (unsigned char)165;
unsigned int var_14 = 2581836117U;
int var_17 = -699440831;
int zero = 0;
short var_20 = (short)11115;
short var_21 = (short)23879;
void init() {
}

void checksum() {
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
