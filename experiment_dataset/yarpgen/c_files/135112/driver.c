#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5169888846595395781ULL;
unsigned char var_5 = (unsigned char)45;
unsigned int var_10 = 183361214U;
unsigned char var_11 = (unsigned char)167;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1006442298U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
