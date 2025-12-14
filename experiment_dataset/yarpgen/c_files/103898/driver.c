#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4642640014622096971ULL;
unsigned int var_1 = 4246033773U;
signed char var_9 = (signed char)-60;
unsigned int var_10 = 3387685710U;
int zero = 0;
unsigned int var_11 = 492637456U;
unsigned int var_12 = 2832103595U;
unsigned int var_13 = 1567738553U;
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
