#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5785007356696206244ULL;
short var_5 = (short)-12315;
short var_10 = (short)8962;
int zero = 0;
short var_11 = (short)-9087;
unsigned long long int var_12 = 10805421827835682663ULL;
int var_13 = 1094018878;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
