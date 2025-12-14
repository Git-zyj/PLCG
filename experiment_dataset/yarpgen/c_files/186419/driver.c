#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6175215993807723878ULL;
unsigned char var_1 = (unsigned char)133;
unsigned char var_5 = (unsigned char)210;
unsigned char var_6 = (unsigned char)98;
unsigned char var_7 = (unsigned char)216;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned long long int var_11 = 5950940775117826956ULL;
unsigned long long int var_12 = 6288178119726526789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
