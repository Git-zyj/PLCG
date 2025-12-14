#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)337;
unsigned int var_12 = 2756041723U;
unsigned char var_15 = (unsigned char)236;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
signed char var_21 = (signed char)118;
unsigned long long int var_22 = 16750722663076219074ULL;
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
