#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 313800512U;
unsigned char var_7 = (unsigned char)157;
int var_10 = 1530640985;
int zero = 0;
long long int var_11 = 7744093921318699650LL;
unsigned int var_12 = 3164612485U;
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
