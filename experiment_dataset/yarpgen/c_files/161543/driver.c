#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
int var_10 = -72105518;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)64978;
int zero = 0;
long long int var_18 = 6826461671532186850LL;
unsigned short var_19 = (unsigned short)24127;
int var_20 = -1843246169;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
