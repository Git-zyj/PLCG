#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned char var_5 = (unsigned char)93;
unsigned int var_6 = 1968327143U;
unsigned char var_8 = (unsigned char)109;
int zero = 0;
unsigned long long int var_15 = 14601493599301976388ULL;
unsigned int var_16 = 158471298U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
