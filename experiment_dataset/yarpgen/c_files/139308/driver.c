#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -737352709;
int var_5 = 1335158152;
int var_7 = -827890807;
int zero = 0;
unsigned int var_12 = 387087495U;
signed char var_13 = (signed char)123;
unsigned char var_14 = (unsigned char)94;
void init() {
}

void checksum() {
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
