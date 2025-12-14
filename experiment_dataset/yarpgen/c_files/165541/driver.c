#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6926;
long long int var_4 = -4706448234101183106LL;
unsigned int var_6 = 2437703488U;
int zero = 0;
signed char var_12 = (signed char)72;
unsigned char var_13 = (unsigned char)157;
unsigned char var_14 = (unsigned char)235;
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
