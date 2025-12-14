#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 73343755529632461LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)54396;
unsigned char var_10 = (unsigned char)179;
int zero = 0;
unsigned short var_11 = (unsigned short)62996;
unsigned long long int var_12 = 5741121710790203800ULL;
void init() {
}

void checksum() {
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
