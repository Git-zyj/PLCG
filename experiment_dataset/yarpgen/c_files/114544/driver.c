#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7628450812924830972ULL;
short var_11 = (short)-5405;
unsigned char var_14 = (unsigned char)249;
signed char var_16 = (signed char)117;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7610442631277923452LL;
unsigned char var_20 = (unsigned char)62;
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
