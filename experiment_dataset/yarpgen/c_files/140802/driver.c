#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21018;
int var_4 = -827014131;
long long int var_6 = -4735969862463380077LL;
unsigned short var_9 = (unsigned short)54299;
int zero = 0;
unsigned char var_10 = (unsigned char)126;
int var_11 = -2070708291;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
