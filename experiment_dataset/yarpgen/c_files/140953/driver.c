#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)2;
unsigned char var_5 = (unsigned char)122;
short var_6 = (short)16168;
signed char var_9 = (signed char)119;
int zero = 0;
long long int var_12 = 703174598602991908LL;
unsigned long long int var_13 = 6466300810731089798ULL;
unsigned char var_14 = (unsigned char)207;
short var_15 = (short)-21510;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
