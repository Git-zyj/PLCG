#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_8 = -8606323904043271608LL;
long long int var_11 = -5186292316754321100LL;
unsigned long long int var_12 = 1193084599209579007ULL;
unsigned long long int var_15 = 9595445706016546287ULL;
int zero = 0;
short var_20 = (short)-13297;
unsigned long long int var_21 = 2774816738752746122ULL;
unsigned long long int var_22 = 4132342686166671192ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
