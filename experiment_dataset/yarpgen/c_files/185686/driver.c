#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3889684008U;
unsigned char var_2 = (unsigned char)2;
unsigned char var_3 = (unsigned char)14;
signed char var_4 = (signed char)71;
int var_7 = 526939750;
signed char var_8 = (signed char)-75;
signed char var_13 = (signed char)17;
unsigned short var_16 = (unsigned short)5979;
unsigned short var_17 = (unsigned short)52752;
int zero = 0;
signed char var_19 = (signed char)4;
signed char var_20 = (signed char)-116;
unsigned char var_21 = (unsigned char)197;
short var_22 = (short)-13417;
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
