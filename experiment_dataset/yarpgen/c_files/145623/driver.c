#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9207215508538351885LL;
short var_4 = (short)-16908;
unsigned int var_5 = 2536464250U;
int zero = 0;
short var_11 = (short)10726;
short var_12 = (short)-24081;
unsigned int var_13 = 2096179025U;
unsigned long long int var_14 = 8893977776542942777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
