#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 135973648;
unsigned char var_6 = (unsigned char)84;
_Bool var_7 = (_Bool)0;
short var_8 = (short)800;
int zero = 0;
signed char var_10 = (signed char)53;
long long int var_11 = 210478776114048574LL;
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
