#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1901947646U;
long long int var_3 = 7334761253991049296LL;
int var_7 = -1859118191;
short var_12 = (short)31811;
short var_13 = (short)749;
int zero = 0;
unsigned short var_14 = (unsigned short)17850;
_Bool var_15 = (_Bool)1;
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
