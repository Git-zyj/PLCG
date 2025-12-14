#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 2097032568U;
int var_10 = 1828560713;
int zero = 0;
unsigned short var_11 = (unsigned short)40544;
short var_12 = (short)-31860;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3997075015U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
