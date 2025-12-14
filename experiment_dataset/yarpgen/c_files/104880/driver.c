#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
short var_1 = (short)8704;
short var_2 = (short)27788;
unsigned char var_3 = (unsigned char)125;
long long int var_8 = -8207481430900661478LL;
short var_10 = (short)-5280;
int var_11 = 1131748982;
int zero = 0;
short var_12 = (short)26389;
signed char var_13 = (signed char)-48;
short var_14 = (short)6702;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
