#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
int var_3 = -821801371;
unsigned long long int var_4 = 9392754193719442936ULL;
short var_5 = (short)6543;
int var_6 = 2043134729;
signed char var_7 = (signed char)48;
unsigned short var_9 = (unsigned short)16842;
unsigned short var_13 = (unsigned short)5499;
int zero = 0;
int var_14 = -513750903;
unsigned long long int var_15 = 6927002733617063337ULL;
unsigned short var_16 = (unsigned short)12917;
int var_17 = -589346584;
unsigned long long int var_18 = 1169680126490684050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
