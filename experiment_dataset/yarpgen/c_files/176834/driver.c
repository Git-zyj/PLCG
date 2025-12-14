#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61836;
_Bool var_9 = (_Bool)1;
int var_11 = -1606952872;
unsigned long long int var_14 = 8818196028685072984ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5894108271269645463LL;
unsigned long long int var_17 = 14662009623350340692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
