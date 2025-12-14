#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3210;
int var_1 = 2030065605;
unsigned long long int var_3 = 18029534768232816107ULL;
short var_5 = (short)28048;
int var_8 = -306588133;
short var_11 = (short)4930;
int var_13 = -566199223;
int zero = 0;
unsigned char var_15 = (unsigned char)145;
unsigned short var_16 = (unsigned short)11197;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
