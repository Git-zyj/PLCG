#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30842;
short var_4 = (short)-15971;
short var_5 = (short)12774;
unsigned long long int var_6 = 12420683267253067722ULL;
short var_7 = (short)15051;
short var_9 = (short)-11804;
signed char var_12 = (signed char)1;
int zero = 0;
unsigned long long int var_14 = 17324673718672581046ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)22;
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
