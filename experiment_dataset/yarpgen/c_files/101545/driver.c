#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 817378395U;
unsigned int var_4 = 803009774U;
unsigned int var_10 = 967310565U;
unsigned int var_11 = 3627532946U;
unsigned int var_13 = 1570685949U;
unsigned int var_15 = 2421692610U;
unsigned int var_16 = 2134238680U;
int zero = 0;
unsigned int var_17 = 3367796899U;
unsigned int var_18 = 254431554U;
unsigned int var_19 = 4134699080U;
unsigned int var_20 = 3902987924U;
unsigned int var_21 = 2592408806U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
