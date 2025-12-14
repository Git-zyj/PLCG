#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27991;
unsigned long long int var_7 = 12247918543574580649ULL;
unsigned char var_8 = (unsigned char)76;
int zero = 0;
unsigned int var_10 = 2175178061U;
unsigned int var_11 = 1573759901U;
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
