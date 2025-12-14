#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53154;
unsigned long long int var_2 = 9879210197949377859ULL;
unsigned long long int var_7 = 9916500966002491152ULL;
unsigned long long int var_9 = 6331377204717674042ULL;
unsigned long long int var_19 = 9054424061238337338ULL;
int zero = 0;
unsigned long long int var_20 = 2152626306738040973ULL;
unsigned long long int var_21 = 17453484377775558154ULL;
unsigned long long int var_22 = 18230485544866327740ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
