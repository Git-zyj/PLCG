#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)62;
unsigned int var_4 = 114603544U;
long long int var_10 = -4045861219801312711LL;
unsigned char var_11 = (unsigned char)67;
short var_13 = (short)-1178;
short var_14 = (short)-31571;
int zero = 0;
short var_15 = (short)27508;
int var_16 = -566389369;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
