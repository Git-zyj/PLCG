#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 636003585U;
unsigned char var_3 = (unsigned char)220;
int var_8 = -2098367435;
int zero = 0;
unsigned int var_11 = 32188399U;
signed char var_12 = (signed char)5;
unsigned char var_13 = (unsigned char)163;
long long int var_14 = 2818798719466386240LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
