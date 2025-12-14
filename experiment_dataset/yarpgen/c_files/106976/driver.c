#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2490937122U;
short var_3 = (short)29696;
int zero = 0;
long long int var_10 = 8745959858794158610LL;
signed char var_11 = (signed char)38;
int var_12 = -2085441836;
short var_13 = (short)-14568;
unsigned int var_14 = 2206997556U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
