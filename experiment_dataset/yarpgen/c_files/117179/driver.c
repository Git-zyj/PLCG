#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
unsigned char var_3 = (unsigned char)232;
long long int var_8 = 7690193701021158664LL;
int var_13 = -107503837;
unsigned long long int var_15 = 13431180229628111042ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)96;
signed char var_17 = (signed char)72;
unsigned char var_18 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
