#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9966413291985294160ULL;
long long int var_6 = 5024441194212778016LL;
short var_8 = (short)-9623;
int zero = 0;
unsigned char var_12 = (unsigned char)68;
signed char var_13 = (signed char)-49;
signed char var_14 = (signed char)-65;
unsigned long long int var_15 = 16218930385439618332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
