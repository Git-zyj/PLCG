#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8686;
int var_5 = -1605826871;
int var_8 = 1316476071;
int var_13 = 199254420;
int var_17 = 1316863537;
int var_19 = 1790427885;
int zero = 0;
unsigned short var_20 = (unsigned short)11021;
int var_21 = -1607165585;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
