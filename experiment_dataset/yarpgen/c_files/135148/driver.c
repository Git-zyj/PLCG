#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1639186695808639018LL;
long long int var_6 = -7755639876830776247LL;
unsigned int var_7 = 1211298163U;
int zero = 0;
signed char var_11 = (signed char)86;
unsigned int var_12 = 2869345657U;
void init() {
}

void checksum() {
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
