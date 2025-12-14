#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3930889398U;
unsigned long long int var_7 = 9941797146039767171ULL;
unsigned long long int var_8 = 10246968273762305154ULL;
int var_14 = 1749239696;
int zero = 0;
unsigned int var_19 = 1842608400U;
long long int var_20 = 2332616153768893711LL;
unsigned int var_21 = 764754535U;
unsigned int var_22 = 450491890U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
