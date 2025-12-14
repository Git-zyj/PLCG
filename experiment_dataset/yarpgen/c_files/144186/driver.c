#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)52;
signed char var_7 = (signed char)5;
unsigned long long int var_10 = 2096144597682331024ULL;
unsigned long long int var_14 = 2674102253289556818ULL;
unsigned short var_17 = (unsigned short)22165;
int zero = 0;
unsigned long long int var_18 = 15468215968613599131ULL;
long long int var_19 = 6623233899561277323LL;
unsigned long long int var_20 = 12147303598550405657ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
