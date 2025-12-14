#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
unsigned long long int var_4 = 11037661379914924484ULL;
unsigned int var_10 = 3114600828U;
int zero = 0;
signed char var_12 = (signed char)-33;
unsigned short var_13 = (unsigned short)49135;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
