#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2021919584;
unsigned long long int var_4 = 15771021308697950435ULL;
int var_10 = 902226991;
signed char var_12 = (signed char)-11;
int zero = 0;
unsigned int var_13 = 3041695683U;
unsigned long long int var_14 = 1193760198776766203ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
