#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29887;
unsigned long long int var_10 = 38027071688929662ULL;
int var_12 = -1801874882;
unsigned long long int var_15 = 13226666927689777114ULL;
short var_18 = (short)-19650;
int zero = 0;
unsigned char var_20 = (unsigned char)241;
int var_21 = 643215272;
unsigned long long int var_22 = 17043423479403008739ULL;
long long int var_23 = -1764989396538131337LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
