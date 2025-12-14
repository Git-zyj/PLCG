#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)167;
_Bool var_5 = (_Bool)0;
long long int var_10 = -7651116487717365268LL;
int zero = 0;
long long int var_14 = -3001357132349058704LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)20179;
short var_17 = (short)-23065;
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
