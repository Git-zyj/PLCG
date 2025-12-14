#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14771130171229275779ULL;
unsigned long long int var_4 = 10190001071002617559ULL;
unsigned short var_8 = (unsigned short)16390;
int zero = 0;
int var_12 = -282307430;
unsigned int var_13 = 1537968347U;
unsigned char var_14 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
