#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1603888138;
unsigned short var_1 = (unsigned short)47461;
short var_7 = (short)-26459;
int zero = 0;
int var_11 = 276196396;
unsigned short var_12 = (unsigned short)14344;
short var_13 = (short)16449;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
