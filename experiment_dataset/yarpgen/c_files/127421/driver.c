#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned char var_1 = (unsigned char)121;
unsigned long long int var_2 = 241770777552160968ULL;
long long int var_3 = 6116956577189483176LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 539109187U;
short var_8 = (short)-14298;
int var_10 = 1720078974;
int zero = 0;
signed char var_11 = (signed char)33;
long long int var_12 = 1876721106441137741LL;
short var_13 = (short)-20450;
long long int var_14 = -98006556360341719LL;
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
