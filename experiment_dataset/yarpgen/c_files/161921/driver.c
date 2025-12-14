#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 4074884798304324455LL;
long long int var_12 = -8711150600642612231LL;
unsigned short var_13 = (unsigned short)7123;
int zero = 0;
long long int var_18 = -365218354294601188LL;
unsigned long long int var_19 = 7517918482076371169ULL;
long long int var_20 = 9029500613077100008LL;
void init() {
}

void checksum() {
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
