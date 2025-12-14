#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 121935446U;
long long int var_9 = 9139938991707083915LL;
long long int var_14 = -4154790459974633231LL;
int zero = 0;
unsigned char var_18 = (unsigned char)177;
unsigned int var_19 = 3523413032U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
