#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13687839749328263406ULL;
unsigned long long int var_6 = 16897737827937542043ULL;
unsigned long long int var_8 = 8992925648489397442ULL;
int zero = 0;
unsigned long long int var_11 = 17771047062030400564ULL;
unsigned long long int var_12 = 11949024622577042840ULL;
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
