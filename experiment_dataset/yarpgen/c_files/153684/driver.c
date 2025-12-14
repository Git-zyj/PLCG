#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned char var_2 = (unsigned char)200;
int var_5 = 1390324427;
int var_8 = -208692936;
long long int var_9 = 1455244502117951070LL;
unsigned char var_12 = (unsigned char)218;
long long int var_13 = 1716963609439458432LL;
int zero = 0;
int var_14 = 1490626201;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)33;
void init() {
}

void checksum() {
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
