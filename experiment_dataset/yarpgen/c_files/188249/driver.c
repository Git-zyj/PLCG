#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12385902836727579244ULL;
unsigned long long int var_5 = 4852379071771470981ULL;
unsigned long long int var_6 = 3829825192562835145ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12680901782861625575ULL;
void init() {
}

void checksum() {
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
