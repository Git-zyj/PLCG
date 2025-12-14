#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)27;
unsigned char var_3 = (unsigned char)223;
int var_4 = 1841297525;
unsigned char var_15 = (unsigned char)74;
unsigned int var_17 = 538022300U;
int zero = 0;
unsigned int var_20 = 4222195382U;
unsigned char var_21 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
