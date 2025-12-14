#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5650;
long long int var_2 = -9137717308167956886LL;
unsigned int var_4 = 2956986971U;
int var_7 = -1658924855;
short var_12 = (short)-28194;
signed char var_14 = (signed char)-10;
int zero = 0;
short var_15 = (short)-6220;
unsigned short var_16 = (unsigned short)7192;
unsigned int var_17 = 1806731835U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
