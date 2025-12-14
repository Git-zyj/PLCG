#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13069;
long long int var_2 = -2464049605924277261LL;
unsigned short var_5 = (unsigned short)40535;
_Bool var_6 = (_Bool)1;
int var_7 = -2075246082;
unsigned short var_8 = (unsigned short)24477;
int zero = 0;
unsigned int var_10 = 3569085581U;
unsigned char var_11 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
