#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19397;
int var_8 = -1602592829;
int var_12 = -513741210;
short var_13 = (short)-928;
signed char var_15 = (signed char)37;
signed char var_16 = (signed char)55;
unsigned short var_18 = (unsigned short)10617;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
unsigned short var_20 = (unsigned short)36619;
unsigned int var_21 = 3729630962U;
long long int var_22 = -676823114333260525LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
