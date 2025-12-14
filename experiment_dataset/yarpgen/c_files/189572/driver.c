#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9199185186239671832LL;
short var_8 = (short)14894;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_16 = (short)29628;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8805182924547565983LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
