#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7199188261969907129LL;
unsigned int var_5 = 3249087510U;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)17427;
int zero = 0;
long long int var_15 = -179008122132614992LL;
unsigned int var_16 = 2734357686U;
signed char var_17 = (signed char)-99;
signed char var_18 = (signed char)72;
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
