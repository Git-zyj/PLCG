#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32137;
long long int var_1 = -6997515855347494379LL;
_Bool var_2 = (_Bool)0;
int var_5 = 1540011386;
unsigned char var_7 = (unsigned char)182;
short var_10 = (short)-4847;
int zero = 0;
int var_11 = 1768639710;
int var_12 = -1023881639;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
