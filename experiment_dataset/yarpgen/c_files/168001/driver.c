#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52114;
unsigned short var_1 = (unsigned short)19258;
unsigned short var_12 = (unsigned short)1962;
unsigned short var_14 = (unsigned short)6741;
int zero = 0;
unsigned long long int var_17 = 13336920591053810323ULL;
unsigned long long int var_18 = 11918459705780897335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
