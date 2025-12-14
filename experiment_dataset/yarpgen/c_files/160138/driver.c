#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3833010120821761159ULL;
_Bool var_8 = (_Bool)1;
short var_12 = (short)-16601;
int zero = 0;
short var_17 = (short)-18223;
unsigned short var_18 = (unsigned short)57506;
void init() {
}

void checksum() {
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
