#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9553640819401861286ULL;
unsigned char var_6 = (unsigned char)154;
unsigned char var_7 = (unsigned char)243;
long long int var_8 = -4020911919737781089LL;
int zero = 0;
unsigned int var_12 = 1876256611U;
int var_13 = -724559696;
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
