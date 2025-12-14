#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
unsigned char var_7 = (unsigned char)230;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 4547734748709099237ULL;
unsigned int var_20 = 4051368604U;
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
