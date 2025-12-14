#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10769;
unsigned long long int var_4 = 18086044281862769782ULL;
short var_5 = (short)-1209;
short var_8 = (short)32061;
int zero = 0;
short var_10 = (short)2087;
short var_11 = (short)-24286;
short var_12 = (short)30459;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
