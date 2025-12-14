#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14019920484503031259ULL;
unsigned int var_1 = 2093741771U;
unsigned int var_7 = 460832901U;
int zero = 0;
unsigned long long int var_11 = 704153230146307739ULL;
unsigned int var_12 = 1674597114U;
unsigned int var_13 = 342939566U;
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
