#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1960242169;
long long int var_7 = -182130342139826498LL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)99;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 5531310695859140924ULL;
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
