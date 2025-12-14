#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -723405008452907824LL;
unsigned long long int var_6 = 9725478086443156744ULL;
signed char var_8 = (signed char)23;
int var_10 = -1612923436;
int zero = 0;
unsigned long long int var_16 = 483525983568137123ULL;
unsigned long long int var_17 = 5578880404781611232ULL;
void init() {
}

void checksum() {
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
