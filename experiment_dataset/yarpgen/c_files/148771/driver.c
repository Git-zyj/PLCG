#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1960639473635476499LL;
unsigned int var_5 = 386608278U;
short var_6 = (short)23242;
int zero = 0;
unsigned short var_17 = (unsigned short)21720;
unsigned long long int var_18 = 16920304994152666553ULL;
int var_19 = 1717010647;
int var_20 = 1408341949;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
