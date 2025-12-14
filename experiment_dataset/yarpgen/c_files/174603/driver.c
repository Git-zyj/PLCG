#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2270989570U;
unsigned int var_6 = 3727201482U;
unsigned char var_15 = (unsigned char)198;
unsigned int var_16 = 1553818364U;
int zero = 0;
unsigned char var_18 = (unsigned char)72;
unsigned int var_19 = 1565067705U;
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
