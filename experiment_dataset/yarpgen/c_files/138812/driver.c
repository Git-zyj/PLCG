#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2793044684U;
unsigned int var_4 = 1249555601U;
unsigned int var_7 = 836648838U;
unsigned int var_10 = 108571763U;
int zero = 0;
unsigned int var_12 = 2347902123U;
unsigned int var_13 = 1094450830U;
void init() {
}

void checksum() {
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
