#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)41;
long long int var_4 = 4801357293778756988LL;
unsigned char var_7 = (unsigned char)102;
int zero = 0;
long long int var_10 = 1966632987776576816LL;
int var_11 = 485930836;
long long int var_12 = -5047681344749851634LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
