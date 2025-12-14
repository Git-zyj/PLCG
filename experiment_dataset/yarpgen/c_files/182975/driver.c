#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14239534855231876620ULL;
unsigned long long int var_10 = 10723659399593171175ULL;
unsigned int var_14 = 2692128899U;
int zero = 0;
unsigned long long int var_17 = 14443247461938591419ULL;
unsigned long long int var_18 = 3279330404352476839ULL;
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
