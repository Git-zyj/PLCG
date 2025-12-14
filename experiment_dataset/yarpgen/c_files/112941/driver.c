#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2415188645U;
int var_13 = 963272408;
unsigned int var_17 = 3473988120U;
unsigned int var_18 = 2350380966U;
unsigned char var_19 = (unsigned char)97;
int zero = 0;
unsigned char var_20 = (unsigned char)102;
unsigned int var_21 = 3527377301U;
unsigned char var_22 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
