#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10630;
unsigned short var_2 = (unsigned short)45760;
signed char var_3 = (signed char)26;
unsigned short var_4 = (unsigned short)11227;
signed char var_5 = (signed char)-78;
unsigned long long int var_6 = 5032162382789443161ULL;
short var_7 = (short)-14159;
unsigned char var_8 = (unsigned char)190;
unsigned char var_10 = (unsigned char)33;
unsigned char var_11 = (unsigned char)3;
unsigned long long int var_12 = 14836009210462446818ULL;
long long int var_13 = 1835530835929972180LL;
int zero = 0;
signed char var_14 = (signed char)-79;
unsigned char var_15 = (unsigned char)79;
signed char var_16 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
