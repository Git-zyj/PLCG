#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1832905507U;
long long int var_6 = -6928025599360435813LL;
int var_7 = -1945101088;
unsigned char var_11 = (unsigned char)229;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1053242546U;
int var_15 = 1628943594;
int var_16 = 338580927;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
