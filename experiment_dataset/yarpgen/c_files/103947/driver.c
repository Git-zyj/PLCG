#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18059830475016520185ULL;
long long int var_4 = 6640918890648710606LL;
int zero = 0;
unsigned long long int var_16 = 14136919367835397844ULL;
long long int var_17 = -2303563616547812178LL;
unsigned int var_18 = 493171427U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
