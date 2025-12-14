#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25830;
int var_2 = 649427302;
short var_4 = (short)7557;
int var_5 = 1371862371;
unsigned int var_6 = 2400108405U;
unsigned int var_7 = 4040448463U;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)-117;
long long int var_10 = -6054868127104615056LL;
signed char var_11 = (signed char)-102;
int zero = 0;
unsigned short var_12 = (unsigned short)6158;
unsigned short var_13 = (unsigned short)37882;
signed char var_14 = (signed char)-111;
long long int var_15 = -7844861087432592726LL;
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
