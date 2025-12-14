#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)59;
_Bool var_5 = (_Bool)0;
int var_6 = 44316589;
short var_9 = (short)-27632;
int zero = 0;
unsigned int var_10 = 1551947631U;
unsigned int var_11 = 135880137U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
