#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)214;
unsigned char var_6 = (unsigned char)84;
unsigned char var_10 = (unsigned char)46;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
