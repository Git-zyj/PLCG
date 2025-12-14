#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1506322529U;
unsigned long long int var_4 = 9938417774419654231ULL;
long long int var_5 = -4311544641404026468LL;
int zero = 0;
unsigned int var_18 = 2491190804U;
int var_19 = 2069472547;
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
