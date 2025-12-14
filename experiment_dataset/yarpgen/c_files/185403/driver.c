#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_10 = 3968215391042506925ULL;
signed char var_11 = (signed char)109;
long long int var_14 = -5790665524750467390LL;
int zero = 0;
unsigned char var_15 = (unsigned char)116;
int var_16 = -1357161424;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
