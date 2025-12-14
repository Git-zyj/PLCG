#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)11723;
unsigned long long int var_16 = 9075899388489012886ULL;
int zero = 0;
long long int var_18 = -1767125411789566970LL;
signed char var_19 = (signed char)39;
unsigned long long int var_20 = 3138401705425369782ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
