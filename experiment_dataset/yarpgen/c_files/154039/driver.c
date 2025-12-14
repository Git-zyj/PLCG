#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 414631906929658793LL;
long long int var_10 = 8504086038791782188LL;
unsigned int var_14 = 2189315378U;
unsigned int var_15 = 1332453952U;
int zero = 0;
unsigned int var_18 = 2298638014U;
unsigned int var_19 = 2077333917U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
