#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned int var_5 = 4179722830U;
long long int var_7 = -661550931825340458LL;
unsigned int var_8 = 3270750851U;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
unsigned long long int var_20 = 10436586453238100311ULL;
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
