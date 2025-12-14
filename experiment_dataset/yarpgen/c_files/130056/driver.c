#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1770938927;
unsigned short var_3 = (unsigned short)11792;
long long int var_4 = -64663272594479303LL;
long long int var_6 = -7799437543037008534LL;
unsigned short var_13 = (unsigned short)9892;
int zero = 0;
long long int var_14 = 5889642413195601457LL;
long long int var_15 = 7379700094867972476LL;
long long int var_16 = -6161819845470137900LL;
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
