#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1686304632861009800ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
unsigned long long int var_11 = 13854997772713233420ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
