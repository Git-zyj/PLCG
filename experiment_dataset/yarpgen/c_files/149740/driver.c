#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1637306774225813779ULL;
unsigned int var_4 = 3553401287U;
long long int var_6 = 4469966604593157271LL;
short var_7 = (short)-14876;
long long int var_12 = -5036869646927895761LL;
unsigned char var_15 = (unsigned char)149;
short var_16 = (short)-4210;
int zero = 0;
unsigned char var_17 = (unsigned char)169;
unsigned char var_18 = (unsigned char)74;
_Bool var_19 = (_Bool)1;
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
