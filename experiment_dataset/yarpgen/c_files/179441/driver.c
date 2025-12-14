#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3542080514439424004LL;
long long int var_5 = 9172014298221188063LL;
int zero = 0;
long long int var_16 = -3327154779234752484LL;
signed char var_17 = (signed char)113;
long long int var_18 = -6613472470778221061LL;
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
