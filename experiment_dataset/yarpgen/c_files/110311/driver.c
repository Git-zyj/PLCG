#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
_Bool var_2 = (_Bool)1;
int var_8 = -397529801;
int var_11 = -1335604016;
int var_12 = 707068807;
long long int var_13 = 4568693993452121454LL;
unsigned int var_14 = 51004521U;
int zero = 0;
unsigned int var_15 = 1766586790U;
unsigned long long int var_16 = 10844225462815858882ULL;
void init() {
}

void checksum() {
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
