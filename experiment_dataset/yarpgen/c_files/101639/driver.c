#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1443473652;
unsigned short var_3 = (unsigned short)52887;
unsigned char var_4 = (unsigned char)8;
unsigned char var_5 = (unsigned char)102;
unsigned char var_6 = (unsigned char)42;
long long int var_8 = 6132465645182776519LL;
short var_9 = (short)29842;
unsigned short var_10 = (unsigned short)30420;
long long int var_11 = 7064809353791746636LL;
int zero = 0;
short var_13 = (short)-32040;
short var_14 = (short)19288;
unsigned int var_15 = 3998042852U;
void init() {
}

void checksum() {
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
