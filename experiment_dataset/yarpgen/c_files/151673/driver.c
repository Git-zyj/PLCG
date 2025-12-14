#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3307674185U;
unsigned char var_10 = (unsigned char)35;
int zero = 0;
unsigned long long int var_11 = 976155638839550406ULL;
unsigned long long int var_12 = 3087147722650210166ULL;
int var_13 = -1942501914;
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
