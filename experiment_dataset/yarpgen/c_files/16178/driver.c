#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 129669908U;
unsigned char var_6 = (unsigned char)29;
long long int var_8 = -2756010669883320012LL;
signed char var_10 = (signed char)-14;
unsigned char var_12 = (unsigned char)114;
unsigned char var_14 = (unsigned char)82;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
long long int var_16 = 5413630736470274431LL;
short var_17 = (short)-9420;
signed char var_18 = (signed char)-103;
void init() {
}

void checksum() {
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
