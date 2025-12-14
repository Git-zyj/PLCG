#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
unsigned short var_3 = (unsigned short)29587;
short var_5 = (short)511;
short var_6 = (short)553;
long long int var_8 = 8543908006319256365LL;
signed char var_13 = (signed char)-123;
unsigned long long int var_17 = 406150827746858695ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)9730;
long long int var_20 = 1505852707480768639LL;
signed char var_21 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
