#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)217;
unsigned int var_10 = 363166450U;
long long int var_11 = -4357438365249325412LL;
signed char var_15 = (signed char)91;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4256556457U;
void init() {
}

void checksum() {
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
