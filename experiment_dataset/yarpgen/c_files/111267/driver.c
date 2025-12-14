#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
short var_3 = (short)-14135;
unsigned short var_7 = (unsigned short)16675;
unsigned int var_8 = 3459947718U;
unsigned short var_12 = (unsigned short)33693;
unsigned short var_13 = (unsigned short)3587;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)31917;
long long int var_19 = -2091627212929848472LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
