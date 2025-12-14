#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_14 = (_Bool)1;
unsigned int var_17 = 3572480591U;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
unsigned long long int var_19 = 9663204634391810356ULL;
int var_20 = -1712651998;
long long int var_21 = 3462338645757533071LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
