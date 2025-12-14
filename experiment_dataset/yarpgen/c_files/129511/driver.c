#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1728532230;
long long int var_3 = -2601459862236578263LL;
unsigned char var_7 = (unsigned char)123;
unsigned int var_8 = 981069666U;
int zero = 0;
long long int var_10 = 5663042422280506306LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 755554160U;
short var_13 = (short)31554;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
