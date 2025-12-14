#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -660920366;
unsigned short var_2 = (unsigned short)54281;
short var_5 = (short)12438;
unsigned short var_7 = (unsigned short)50204;
unsigned int var_8 = 2022887022U;
signed char var_12 = (signed char)20;
unsigned short var_15 = (unsigned short)44697;
unsigned short var_18 = (unsigned short)5224;
int zero = 0;
int var_20 = 1914049978;
unsigned short var_21 = (unsigned short)17775;
unsigned short var_22 = (unsigned short)28356;
void init() {
}

void checksum() {
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
