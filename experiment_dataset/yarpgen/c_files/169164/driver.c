#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2203451362U;
long long int var_2 = -8998964241401734472LL;
short var_4 = (short)-31321;
int var_5 = 583910996;
int var_6 = 1706549064;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)65;
unsigned short var_15 = (unsigned short)37939;
short var_16 = (short)-32246;
unsigned char var_17 = (unsigned char)24;
signed char var_18 = (signed char)-60;
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
