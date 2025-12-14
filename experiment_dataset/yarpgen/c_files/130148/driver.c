#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1468;
unsigned char var_3 = (unsigned char)124;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 2205663760U;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
signed char var_13 = (signed char)99;
int var_14 = 1694369160;
unsigned short var_15 = (unsigned short)43234;
void init() {
}

void checksum() {
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
