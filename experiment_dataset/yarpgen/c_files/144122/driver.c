#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned char var_2 = (unsigned char)20;
unsigned long long int var_5 = 3309337137263519774ULL;
unsigned int var_8 = 3818600922U;
int zero = 0;
unsigned int var_10 = 1763714473U;
signed char var_11 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
