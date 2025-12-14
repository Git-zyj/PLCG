#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19327;
unsigned long long int var_3 = 6763489704110276516ULL;
unsigned char var_6 = (unsigned char)144;
int zero = 0;
long long int var_20 = 4471566440801736827LL;
short var_21 = (short)-8962;
long long int var_22 = -3101447701378439710LL;
unsigned long long int var_23 = 6291047465552058332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
