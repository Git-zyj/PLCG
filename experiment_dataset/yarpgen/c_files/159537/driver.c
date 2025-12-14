#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 425566003;
signed char var_4 = (signed char)-101;
signed char var_5 = (signed char)65;
int var_7 = -1035858850;
unsigned short var_9 = (unsigned short)6053;
signed char var_11 = (signed char)50;
signed char var_14 = (signed char)73;
unsigned char var_15 = (unsigned char)21;
unsigned char var_17 = (unsigned char)114;
unsigned short var_18 = (unsigned short)57593;
int zero = 0;
unsigned int var_19 = 2086786788U;
short var_20 = (short)18973;
int var_21 = 1729520561;
long long int var_22 = -7960429620890171733LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
