#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1885351625;
short var_2 = (short)-14870;
short var_4 = (short)8749;
unsigned char var_5 = (unsigned char)215;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)-1185;
short var_13 = (short)25248;
_Bool var_14 = (_Bool)0;
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
