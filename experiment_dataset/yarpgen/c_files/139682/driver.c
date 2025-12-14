#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6758091900394259733LL;
int var_6 = 31659152;
unsigned char var_11 = (unsigned char)226;
unsigned short var_12 = (unsigned short)45441;
int var_13 = -500217501;
int zero = 0;
long long int var_14 = 9127879871001862716LL;
unsigned char var_15 = (unsigned char)92;
long long int var_16 = -2637371818771443346LL;
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
