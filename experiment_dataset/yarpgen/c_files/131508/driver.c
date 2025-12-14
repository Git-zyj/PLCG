#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
long long int var_2 = 1202132106358210898LL;
long long int var_4 = 678382604052093462LL;
long long int var_7 = -1132469267705512066LL;
unsigned long long int var_11 = 4134302003242503902ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7131279833645407026LL;
void init() {
}

void checksum() {
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
