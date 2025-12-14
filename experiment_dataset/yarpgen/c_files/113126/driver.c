#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6883;
long long int var_8 = 1446468754563620236LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_20 = (short)-12394;
unsigned char var_21 = (unsigned char)185;
long long int var_22 = -6677312403758323224LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
