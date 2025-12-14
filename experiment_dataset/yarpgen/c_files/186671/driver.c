#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned long long int var_4 = 7417064156924693652ULL;
unsigned int var_6 = 3012012655U;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)23217;
int zero = 0;
long long int var_12 = -4969635296193524657LL;
unsigned int var_13 = 231381749U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
