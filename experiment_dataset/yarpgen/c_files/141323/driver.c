#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)31193;
long long int var_8 = 8798011628106747268LL;
unsigned int var_10 = 2151197160U;
unsigned long long int var_14 = 3904241923662485454ULL;
int zero = 0;
unsigned int var_20 = 1990946568U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
