#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)59;
unsigned long long int var_15 = 1431045006112724125ULL;
int zero = 0;
long long int var_16 = -8165642488863016380LL;
unsigned char var_17 = (unsigned char)2;
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
