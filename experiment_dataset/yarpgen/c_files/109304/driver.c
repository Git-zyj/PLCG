#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3260230076313565530LL;
unsigned int var_3 = 3161953732U;
long long int var_5 = 34976277361997859LL;
long long int var_14 = -3675504356222774132LL;
int zero = 0;
short var_19 = (short)-32309;
short var_20 = (short)-21517;
short var_21 = (short)25762;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
