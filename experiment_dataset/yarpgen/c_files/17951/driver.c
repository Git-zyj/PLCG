#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
signed char var_3 = (signed char)77;
unsigned char var_6 = (unsigned char)74;
long long int var_8 = -7966199946530501773LL;
signed char var_9 = (signed char)-46;
short var_10 = (short)-9045;
signed char var_16 = (signed char)95;
unsigned short var_17 = (unsigned short)49273;
int zero = 0;
signed char var_20 = (signed char)-70;
unsigned char var_21 = (unsigned char)74;
short var_22 = (short)30826;
unsigned char var_23 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
