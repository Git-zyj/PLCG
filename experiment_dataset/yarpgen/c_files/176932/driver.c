#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 303586811;
long long int var_3 = 5730219704370755308LL;
unsigned char var_4 = (unsigned char)20;
unsigned char var_8 = (unsigned char)252;
int var_10 = 352436851;
int zero = 0;
long long int var_11 = 8551361120009575552LL;
long long int var_12 = -6384746613170532346LL;
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
