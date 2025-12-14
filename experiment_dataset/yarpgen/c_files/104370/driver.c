#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2135460062U;
unsigned long long int var_4 = 4877692610019322618ULL;
unsigned int var_5 = 519630268U;
unsigned int var_6 = 1546349366U;
unsigned long long int var_9 = 8974605357074161396ULL;
unsigned long long int var_10 = 7508176452858399540ULL;
int zero = 0;
unsigned long long int var_13 = 12808536058150870205ULL;
unsigned long long int var_14 = 8900781088120574402ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
