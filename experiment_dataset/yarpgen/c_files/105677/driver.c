#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)244;
unsigned short var_16 = (unsigned short)8380;
int var_18 = 940770545;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
long long int var_21 = 7449460959019488824LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-8014;
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
