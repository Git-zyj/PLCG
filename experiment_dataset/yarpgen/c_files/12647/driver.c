#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1222284964;
int var_3 = -563334278;
unsigned long long int var_4 = 7833025499574326983ULL;
unsigned short var_6 = (unsigned short)1814;
int zero = 0;
short var_11 = (short)7922;
int var_12 = -761421870;
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
