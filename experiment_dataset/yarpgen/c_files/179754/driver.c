#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55243;
unsigned char var_3 = (unsigned char)200;
unsigned short var_4 = (unsigned short)23638;
long long int var_8 = 6423082802372591156LL;
unsigned char var_9 = (unsigned char)51;
unsigned long long int var_10 = 2088368333905779343ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)16;
unsigned long long int var_12 = 4735216587282397618ULL;
unsigned int var_13 = 3772662605U;
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
