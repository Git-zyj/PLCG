#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3050580901178699329LL;
unsigned char var_1 = (unsigned char)158;
short var_4 = (short)-27728;
short var_8 = (short)24258;
unsigned short var_11 = (unsigned short)46937;
signed char var_18 = (signed char)21;
int zero = 0;
unsigned int var_19 = 623306872U;
unsigned char var_20 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
