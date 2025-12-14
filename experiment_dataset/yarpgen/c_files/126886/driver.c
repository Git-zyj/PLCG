#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_12 = 6382995703260951708LL;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
long long int var_19 = 4183873596941711009LL;
short var_20 = (short)-18960;
unsigned char var_21 = (unsigned char)228;
unsigned long long int var_22 = 5359435556914648535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
