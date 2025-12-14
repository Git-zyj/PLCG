#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13860782874779688874ULL;
_Bool var_3 = (_Bool)1;
short var_10 = (short)-21585;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_14 = 254041132;
long long int var_15 = -6210007229118412679LL;
void init() {
}

void checksum() {
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
