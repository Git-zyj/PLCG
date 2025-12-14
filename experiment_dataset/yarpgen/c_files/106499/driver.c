#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1713667689;
long long int var_7 = -4555145160953581784LL;
signed char var_8 = (signed char)112;
int var_12 = 359747151;
int zero = 0;
unsigned int var_13 = 3728802167U;
long long int var_14 = -2716919506700387330LL;
unsigned int var_15 = 307405752U;
long long int var_16 = 8589495135276934148LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
