#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)55;
int var_7 = -1398295969;
signed char var_8 = (signed char)37;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)17505;
short var_17 = (short)-24294;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
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
