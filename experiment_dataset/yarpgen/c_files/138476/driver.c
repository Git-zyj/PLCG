#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned int var_2 = 3339682383U;
unsigned int var_7 = 522982889U;
unsigned int var_8 = 1763263115U;
unsigned int var_9 = 1587039329U;
int zero = 0;
unsigned char var_13 = (unsigned char)80;
long long int var_14 = 7270723671501237362LL;
unsigned char var_15 = (unsigned char)198;
short var_16 = (short)-21899;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
