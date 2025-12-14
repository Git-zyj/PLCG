#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 8525444863741118351ULL;
unsigned char var_6 = (unsigned char)154;
unsigned int var_18 = 695685083U;
int zero = 0;
unsigned long long int var_20 = 1113822795258667592ULL;
int var_21 = 1524948006;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
