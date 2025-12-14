#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39780;
int var_1 = 969601792;
unsigned char var_4 = (unsigned char)122;
int var_5 = 1291695081;
int var_11 = 1465312416;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)12645;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
