#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14115;
short var_1 = (short)-3799;
unsigned char var_2 = (unsigned char)24;
short var_3 = (short)-925;
unsigned char var_4 = (unsigned char)198;
unsigned char var_5 = (unsigned char)161;
short var_8 = (short)17384;
short var_10 = (short)-446;
short var_11 = (short)-26009;
int zero = 0;
short var_12 = (short)7975;
short var_13 = (short)11284;
short var_14 = (short)-2214;
long long int var_15 = 9020442220329808762LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
