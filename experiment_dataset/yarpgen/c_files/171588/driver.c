#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1960547391799342452LL;
short var_6 = (short)-28075;
unsigned int var_8 = 1461808797U;
unsigned long long int var_11 = 14384030120822694185ULL;
unsigned char var_12 = (unsigned char)201;
int zero = 0;
unsigned char var_15 = (unsigned char)147;
_Bool var_16 = (_Bool)0;
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
