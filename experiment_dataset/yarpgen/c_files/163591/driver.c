#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)3531;
unsigned int var_13 = 3890078999U;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
long long int var_20 = -708919745431038752LL;
unsigned int var_21 = 4050129116U;
signed char var_22 = (signed char)-61;
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
