#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8314746140070822590ULL;
unsigned int var_3 = 2312866U;
unsigned char var_5 = (unsigned char)198;
short var_7 = (short)15647;
int var_10 = 1894018583;
int var_11 = -1521224590;
long long int var_14 = -3343018831487002554LL;
int var_16 = -767528618;
int var_17 = 2070311514;
int zero = 0;
short var_18 = (short)-8516;
unsigned char var_19 = (unsigned char)134;
unsigned char var_20 = (unsigned char)46;
int var_21 = -1938902642;
signed char var_22 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
