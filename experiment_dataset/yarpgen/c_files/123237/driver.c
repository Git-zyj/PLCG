#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2267605239U;
unsigned int var_10 = 3961475904U;
unsigned int var_13 = 2669775369U;
unsigned char var_19 = (unsigned char)248;
int zero = 0;
long long int var_20 = -6807727524508671050LL;
unsigned long long int var_21 = 4033491017940022449ULL;
unsigned int var_22 = 2567455710U;
signed char var_23 = (signed char)78;
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
