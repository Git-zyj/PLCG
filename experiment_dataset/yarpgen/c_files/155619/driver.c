#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5878348342376560535LL;
int var_7 = 4707477;
unsigned char var_8 = (unsigned char)155;
int zero = 0;
unsigned char var_16 = (unsigned char)133;
int var_17 = 1811542078;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
