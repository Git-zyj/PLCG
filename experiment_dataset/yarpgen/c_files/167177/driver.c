#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1005434374;
int var_5 = 648929507;
signed char var_6 = (signed char)47;
unsigned int var_8 = 3185412741U;
unsigned char var_11 = (unsigned char)193;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)209;
int zero = 0;
unsigned long long int var_16 = 818076980636659338ULL;
unsigned long long int var_17 = 7437620463991578662ULL;
unsigned char var_18 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
