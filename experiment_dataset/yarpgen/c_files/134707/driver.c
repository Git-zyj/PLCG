#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3347420147U;
int var_11 = -1071067475;
unsigned int var_13 = 2963006633U;
int zero = 0;
long long int var_15 = 2136773309822675797LL;
unsigned long long int var_16 = 14688480217428973392ULL;
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
