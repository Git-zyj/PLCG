#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3196999270U;
unsigned short var_4 = (unsigned short)57905;
unsigned int var_5 = 3138341214U;
unsigned char var_6 = (unsigned char)140;
int var_10 = 1715513607;
unsigned short var_15 = (unsigned short)47558;
unsigned int var_18 = 1902532222U;
int zero = 0;
unsigned int var_19 = 899464502U;
unsigned int var_20 = 3272741973U;
unsigned char var_21 = (unsigned char)91;
_Bool var_22 = (_Bool)1;
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
