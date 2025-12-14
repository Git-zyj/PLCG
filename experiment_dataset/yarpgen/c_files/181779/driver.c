#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5379469241753340608LL;
signed char var_10 = (signed char)-16;
int zero = 0;
signed char var_20 = (signed char)118;
unsigned char var_21 = (unsigned char)219;
signed char var_22 = (signed char)64;
unsigned int var_23 = 3793628023U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
