#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1843941697U;
long long int var_7 = -4111828281957702185LL;
long long int var_10 = 2483738285834700176LL;
unsigned int var_12 = 2740413566U;
long long int var_16 = -5649158024409493579LL;
int zero = 0;
int var_17 = 1106206824;
unsigned char var_18 = (unsigned char)151;
unsigned int var_19 = 1115283249U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
