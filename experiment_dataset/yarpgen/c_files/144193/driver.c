#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3245205706U;
long long int var_2 = 8784386163950208869LL;
signed char var_8 = (signed char)108;
long long int var_10 = -4275302531664460160LL;
int zero = 0;
short var_15 = (short)-13819;
long long int var_16 = 1597703018302074740LL;
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
