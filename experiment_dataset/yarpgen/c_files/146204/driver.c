#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)92;
unsigned short var_13 = (unsigned short)42134;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7828639676460683147ULL;
int zero = 0;
unsigned long long int var_19 = 12693366428128644258ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
