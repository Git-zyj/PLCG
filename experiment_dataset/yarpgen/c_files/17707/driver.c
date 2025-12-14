#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)17213;
unsigned short var_12 = (unsigned short)12099;
unsigned short var_17 = (unsigned short)47610;
unsigned short var_18 = (unsigned short)58663;
int zero = 0;
unsigned short var_19 = (unsigned short)12709;
unsigned short var_20 = (unsigned short)36217;
unsigned short var_21 = (unsigned short)46045;
unsigned short var_22 = (unsigned short)49415;
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
