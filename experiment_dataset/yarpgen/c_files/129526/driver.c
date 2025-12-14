#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)10;
int var_3 = 44455911;
unsigned char var_5 = (unsigned char)93;
unsigned char var_7 = (unsigned char)251;
int var_8 = 1347918768;
int zero = 0;
unsigned char var_10 = (unsigned char)45;
int var_11 = -577246510;
unsigned char var_12 = (unsigned char)253;
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
