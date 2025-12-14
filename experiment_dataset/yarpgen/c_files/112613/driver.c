#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2940334681U;
long long int var_5 = 1934308119654762389LL;
int var_12 = 505114954;
int zero = 0;
unsigned char var_13 = (unsigned char)72;
unsigned char var_14 = (unsigned char)229;
void init() {
}

void checksum() {
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
