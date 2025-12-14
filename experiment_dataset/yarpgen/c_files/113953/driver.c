#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3812466591U;
short var_4 = (short)2454;
unsigned int var_6 = 980009829U;
unsigned char var_7 = (unsigned char)233;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -2871090144875607272LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 6793783463009815042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
