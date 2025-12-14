#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3516401290931401059LL;
_Bool var_3 = (_Bool)0;
long long int var_6 = 368790197798589448LL;
int var_7 = 22440225;
short var_10 = (short)-773;
unsigned long long int var_11 = 17821711368501998035ULL;
int zero = 0;
short var_12 = (short)7771;
int var_13 = 1822696683;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
