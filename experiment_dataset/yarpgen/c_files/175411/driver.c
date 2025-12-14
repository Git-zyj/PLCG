#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2499679032835891808ULL;
unsigned char var_6 = (unsigned char)94;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)99;
int zero = 0;
long long int var_13 = -7878261707433756632LL;
unsigned char var_14 = (unsigned char)172;
unsigned int var_15 = 3813937851U;
long long int var_16 = 2809869843298159148LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
