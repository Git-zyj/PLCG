#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3197424785U;
unsigned short var_5 = (unsigned short)10750;
unsigned short var_8 = (unsigned short)36740;
long long int var_12 = -6368327932759358913LL;
int var_18 = -1144832702;
int zero = 0;
signed char var_20 = (signed char)73;
short var_21 = (short)29510;
void init() {
}

void checksum() {
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
