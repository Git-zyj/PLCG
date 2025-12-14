#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 9305719837795391569ULL;
unsigned long long int var_6 = 7025350246649820484ULL;
long long int var_8 = -7130762271835726658LL;
int zero = 0;
int var_10 = -2022171301;
unsigned char var_11 = (unsigned char)33;
unsigned long long int var_12 = 3240856560459513803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
