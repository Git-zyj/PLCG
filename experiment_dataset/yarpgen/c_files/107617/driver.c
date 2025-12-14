#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37298;
short var_1 = (short)-27063;
long long int var_2 = 481051905998204744LL;
unsigned int var_8 = 2266640108U;
int zero = 0;
unsigned long long int var_10 = 3485867847225907480ULL;
signed char var_11 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
