#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1529949691U;
unsigned int var_9 = 1191246286U;
unsigned short var_10 = (unsigned short)3718;
unsigned int var_11 = 1436389299U;
int var_14 = -1984204010;
unsigned int var_15 = 1975316917U;
unsigned short var_17 = (unsigned short)38383;
int zero = 0;
unsigned int var_19 = 4272676874U;
short var_20 = (short)6583;
unsigned short var_21 = (unsigned short)8670;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
