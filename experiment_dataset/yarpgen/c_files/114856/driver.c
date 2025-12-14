#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17505;
unsigned int var_2 = 2451069959U;
int var_3 = -339297219;
unsigned long long int var_8 = 14499659994853776566ULL;
long long int var_10 = -8035123160478499403LL;
unsigned char var_11 = (unsigned char)68;
unsigned int var_13 = 1972854322U;
int zero = 0;
short var_14 = (short)6174;
signed char var_15 = (signed char)-46;
unsigned char var_16 = (unsigned char)205;
short var_17 = (short)-7562;
long long int var_18 = -1713817380166433126LL;
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
