#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7494480411214848779LL;
unsigned char var_11 = (unsigned char)228;
signed char var_13 = (signed char)68;
unsigned char var_16 = (unsigned char)252;
int zero = 0;
int var_18 = -4961685;
int var_19 = -1266432217;
unsigned int var_20 = 1836748733U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
