#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-16561;
_Bool var_6 = (_Bool)0;
int var_8 = -1993086307;
unsigned long long int var_10 = 7412049742890448235ULL;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
long long int var_16 = 8405105549084994846LL;
void init() {
}

void checksum() {
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
