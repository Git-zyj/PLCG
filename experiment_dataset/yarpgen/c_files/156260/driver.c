#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2006216259;
unsigned short var_2 = (unsigned short)39912;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -2542968761141989990LL;
unsigned char var_11 = (unsigned char)41;
unsigned int var_12 = 157104382U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
