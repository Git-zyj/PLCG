#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7787214036353214531LL;
short var_5 = (short)-16794;
unsigned long long int var_7 = 3348218815486720923ULL;
int var_8 = -820613701;
short var_14 = (short)3835;
unsigned char var_15 = (unsigned char)65;
unsigned int var_19 = 1511470561U;
int zero = 0;
signed char var_20 = (signed char)-24;
unsigned char var_21 = (unsigned char)9;
unsigned short var_22 = (unsigned short)45133;
unsigned int var_23 = 1100281313U;
unsigned int var_24 = 2607269344U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
