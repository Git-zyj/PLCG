#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned char var_1 = (unsigned char)21;
int var_2 = -1388764391;
unsigned char var_3 = (unsigned char)129;
int var_7 = 382794595;
int var_10 = -1275278827;
int zero = 0;
unsigned char var_11 = (unsigned char)248;
unsigned char var_12 = (unsigned char)13;
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
