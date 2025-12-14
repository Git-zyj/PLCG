#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4295077164800020861LL;
short var_5 = (short)-11132;
unsigned long long int var_7 = 9381425411615047566ULL;
int var_9 = 1479640017;
int var_14 = -1995369956;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
int var_16 = 380177150;
void init() {
}

void checksum() {
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
