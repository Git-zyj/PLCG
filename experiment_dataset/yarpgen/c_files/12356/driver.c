#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)186;
int var_5 = 1613871229;
int var_8 = 605538044;
unsigned char var_13 = (unsigned char)183;
unsigned char var_17 = (unsigned char)76;
int var_18 = -1309767901;
int zero = 0;
short var_20 = (short)30566;
unsigned short var_21 = (unsigned short)26988;
unsigned int var_22 = 2222462372U;
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
