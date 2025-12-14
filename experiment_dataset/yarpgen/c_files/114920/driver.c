#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47587;
signed char var_3 = (signed char)-87;
unsigned char var_4 = (unsigned char)185;
int var_5 = 1245881866;
long long int var_6 = 869806541284957314LL;
short var_9 = (short)-2923;
unsigned char var_11 = (unsigned char)42;
int zero = 0;
unsigned short var_12 = (unsigned short)26593;
unsigned int var_13 = 1767599480U;
unsigned char var_14 = (unsigned char)63;
void init() {
}

void checksum() {
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
