#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22987;
short var_7 = (short)23539;
unsigned char var_8 = (unsigned char)205;
int var_10 = 424995998;
unsigned short var_11 = (unsigned short)23118;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7583557952809402912LL;
int var_21 = -1445420485;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
