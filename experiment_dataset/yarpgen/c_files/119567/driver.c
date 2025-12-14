#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_6 = 7055814227290528381LL;
unsigned char var_8 = (unsigned char)31;
long long int var_9 = -2821966417246041094LL;
signed char var_10 = (signed char)15;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)16905;
short var_14 = (short)22754;
short var_15 = (short)-23379;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
