#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 2890711614842093649ULL;
short var_3 = (short)943;
long long int var_4 = 7022234604313961341LL;
long long int var_8 = 8793966572320033609LL;
long long int var_11 = -7298386819979659252LL;
short var_12 = (short)-5878;
int zero = 0;
unsigned short var_14 = (unsigned short)29345;
int var_15 = 1593538779;
long long int var_16 = 6808382826447773570LL;
long long int var_17 = -8395045165518871525LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
