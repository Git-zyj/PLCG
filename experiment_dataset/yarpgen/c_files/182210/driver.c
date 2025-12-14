#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3164090895U;
unsigned long long int var_10 = 10141741086163743310ULL;
unsigned long long int var_14 = 18308370595479989512ULL;
unsigned long long int var_15 = 7946205811840122859ULL;
unsigned long long int var_16 = 2126231690230869375ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)91;
unsigned char var_21 = (unsigned char)74;
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
