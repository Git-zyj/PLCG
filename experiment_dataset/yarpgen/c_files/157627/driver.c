#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7451011360427256883LL;
unsigned int var_1 = 2871287911U;
unsigned int var_2 = 1141147778U;
unsigned short var_3 = (unsigned short)31893;
long long int var_5 = -6103259815210095561LL;
unsigned char var_6 = (unsigned char)160;
unsigned int var_8 = 4106224778U;
int zero = 0;
unsigned int var_11 = 1676501732U;
long long int var_12 = -5474573620928401846LL;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
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
