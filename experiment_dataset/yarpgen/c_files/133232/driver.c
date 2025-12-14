#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7347504996016147334LL;
signed char var_7 = (signed char)23;
unsigned short var_8 = (unsigned short)10022;
signed char var_11 = (signed char)72;
short var_12 = (short)6355;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
unsigned int var_14 = 3241543957U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)10082;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
