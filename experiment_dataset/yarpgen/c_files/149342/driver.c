#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14746934857441059748ULL;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4556995706744129976ULL;
int var_13 = -1453235976;
void init() {
}

void checksum() {
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
