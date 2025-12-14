#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1187769898U;
unsigned int var_4 = 2511157451U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 6367653833736943483ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2533143007U;
unsigned long long int var_18 = 16218191177747938910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
