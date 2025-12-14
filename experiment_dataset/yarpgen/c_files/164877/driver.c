#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
unsigned long long int var_13 = 8374913165004593186ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 301955515U;
int zero = 0;
unsigned char var_19 = (unsigned char)58;
unsigned int var_20 = 514781166U;
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
