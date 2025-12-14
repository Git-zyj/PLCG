#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48168;
signed char var_3 = (signed char)92;
long long int var_7 = -6390640571623168919LL;
unsigned int var_19 = 1236559568U;
int zero = 0;
unsigned long long int var_20 = 10659010514478350941ULL;
unsigned int var_21 = 2037660828U;
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
