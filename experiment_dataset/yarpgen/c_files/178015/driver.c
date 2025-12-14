#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4675627094831368371LL;
short var_3 = (short)11392;
unsigned char var_4 = (unsigned char)14;
unsigned char var_6 = (unsigned char)81;
short var_8 = (short)-20518;
unsigned char var_9 = (unsigned char)37;
long long int var_11 = -5726552822923731817LL;
long long int var_12 = -5463901791575455035LL;
long long int var_15 = 2853127892922289565LL;
long long int var_16 = 238125085174652542LL;
long long int var_18 = 8471001451144050764LL;
int zero = 0;
long long int var_20 = -2912943006199154676LL;
unsigned short var_21 = (unsigned short)55161;
long long int var_22 = -1983520392722945583LL;
unsigned char var_23 = (unsigned char)204;
long long int var_24 = 2977952747648501313LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
