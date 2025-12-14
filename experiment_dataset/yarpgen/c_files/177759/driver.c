#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned int var_2 = 769391858U;
unsigned short var_4 = (unsigned short)17651;
signed char var_5 = (signed char)21;
unsigned int var_6 = 2082501034U;
int var_8 = 862784250;
int zero = 0;
unsigned char var_10 = (unsigned char)92;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)4841;
long long int var_13 = -4212265172541019557LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
