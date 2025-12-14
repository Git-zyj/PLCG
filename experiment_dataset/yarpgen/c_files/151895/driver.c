#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)24151;
unsigned long long int var_8 = 4225426362477748074ULL;
unsigned char var_11 = (unsigned char)188;
int zero = 0;
int var_16 = 1822092872;
unsigned int var_17 = 2078999610U;
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
