#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 41831582U;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3108319953U;
int zero = 0;
unsigned int var_10 = 2750025497U;
unsigned int var_11 = 2257076846U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
