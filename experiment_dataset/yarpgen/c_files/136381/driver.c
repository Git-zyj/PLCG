#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20434;
short var_3 = (short)-19952;
int var_6 = 1663364821;
unsigned char var_7 = (unsigned char)27;
int var_8 = 1950415316;
signed char var_9 = (signed char)24;
int zero = 0;
unsigned long long int var_11 = 6432536577367885203ULL;
long long int var_12 = -7775105371446099580LL;
unsigned char var_13 = (unsigned char)145;
int var_14 = -1277219566;
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
