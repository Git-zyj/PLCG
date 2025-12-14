#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)53568;
unsigned short var_8 = (unsigned short)41918;
int var_11 = -1732320942;
int zero = 0;
unsigned int var_12 = 3623015016U;
unsigned long long int var_13 = 11063927756490914167ULL;
unsigned char var_14 = (unsigned char)62;
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
