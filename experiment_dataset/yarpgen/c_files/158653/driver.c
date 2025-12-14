#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
unsigned int var_1 = 2251672364U;
unsigned int var_4 = 3863379473U;
unsigned char var_9 = (unsigned char)64;
_Bool var_10 = (_Bool)0;
int var_11 = -679198518;
int zero = 0;
unsigned char var_15 = (unsigned char)182;
long long int var_16 = -8375582111592684118LL;
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
