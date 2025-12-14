#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -534379683;
unsigned char var_4 = (unsigned char)205;
unsigned long long int var_7 = 12211686792047683627ULL;
int zero = 0;
int var_15 = 446706560;
unsigned char var_16 = (unsigned char)210;
unsigned char var_17 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
