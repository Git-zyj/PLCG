#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2855851862986751585LL;
unsigned char var_6 = (unsigned char)211;
int zero = 0;
unsigned long long int var_12 = 13462302697609691682ULL;
unsigned long long int var_13 = 1772143460014949246ULL;
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
