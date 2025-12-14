#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15563347221017957128ULL;
unsigned long long int var_8 = 3757233987417759399ULL;
unsigned long long int var_10 = 3760951651925609593ULL;
int zero = 0;
unsigned long long int var_11 = 16078972343068394695ULL;
unsigned long long int var_12 = 1203953052495615622ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
