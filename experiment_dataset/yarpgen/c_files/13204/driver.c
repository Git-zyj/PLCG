#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1490806027;
_Bool var_2 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2354489806U;
unsigned short var_15 = (unsigned short)36005;
long long int var_16 = -6402213411847965117LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
