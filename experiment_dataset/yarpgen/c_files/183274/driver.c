#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3729596346U;
unsigned int var_1 = 821490076U;
unsigned int var_4 = 467534099U;
unsigned int var_7 = 3779573510U;
unsigned int var_13 = 3508531000U;
int zero = 0;
unsigned int var_19 = 2117066784U;
unsigned int var_20 = 326727650U;
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
