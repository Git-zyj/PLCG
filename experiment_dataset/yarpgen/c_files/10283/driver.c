#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6937853033492732388ULL;
unsigned long long int var_2 = 678979947069799504ULL;
unsigned short var_3 = (unsigned short)43078;
int zero = 0;
unsigned long long int var_13 = 11424241050610386149ULL;
unsigned long long int var_14 = 17743076134333639790ULL;
void init() {
}

void checksum() {
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
