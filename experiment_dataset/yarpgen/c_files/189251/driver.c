#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5197;
unsigned int var_4 = 1142650776U;
unsigned char var_5 = (unsigned char)167;
long long int var_8 = 5465663129123279681LL;
long long int var_10 = -7680934908571340338LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)14;
int var_13 = -1216829168;
unsigned short var_14 = (unsigned short)48695;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
