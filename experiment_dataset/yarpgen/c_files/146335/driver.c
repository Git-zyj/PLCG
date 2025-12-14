#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
signed char var_6 = (signed char)-116;
unsigned int var_7 = 2730604914U;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
unsigned long long int var_11 = 5135820545338277873ULL;
unsigned short var_12 = (unsigned short)55340;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
