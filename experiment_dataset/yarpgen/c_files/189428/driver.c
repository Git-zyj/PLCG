#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 9448071U;
long long int var_3 = 4118611141492689552LL;
int var_4 = 1970590374;
long long int var_5 = 3034879061641972116LL;
unsigned int var_7 = 2388518992U;
int zero = 0;
unsigned int var_11 = 466604460U;
unsigned long long int var_12 = 6402450670506128178ULL;
unsigned int var_13 = 3107940870U;
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
