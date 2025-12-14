#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7685546813133133085LL;
unsigned char var_4 = (unsigned char)187;
unsigned short var_17 = (unsigned short)2614;
int zero = 0;
signed char var_19 = (signed char)65;
int var_20 = 1608894584;
int var_21 = -1761362909;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
