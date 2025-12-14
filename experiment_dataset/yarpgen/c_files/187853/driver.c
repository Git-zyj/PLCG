#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 343624874U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3141743091U;
unsigned long long int var_11 = 2839564258715405403ULL;
int zero = 0;
int var_12 = 453705540;
unsigned long long int var_13 = 4583882513368371239ULL;
void init() {
}

void checksum() {
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
