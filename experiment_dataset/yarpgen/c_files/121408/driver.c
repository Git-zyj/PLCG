#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)242;
unsigned short var_5 = (unsigned short)59206;
unsigned int var_7 = 3009999428U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
long long int var_10 = 8918902196757124360LL;
unsigned char var_11 = (unsigned char)139;
int var_12 = 1429665685;
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
