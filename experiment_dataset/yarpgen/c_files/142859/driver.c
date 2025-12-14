#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -614530891;
unsigned short var_2 = (unsigned short)21180;
signed char var_3 = (signed char)95;
unsigned int var_4 = 830021745U;
long long int var_6 = -7109304806555215906LL;
signed char var_7 = (signed char)45;
int zero = 0;
signed char var_11 = (signed char)126;
unsigned short var_12 = (unsigned short)30076;
signed char var_13 = (signed char)-42;
unsigned int var_14 = 1333019871U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
