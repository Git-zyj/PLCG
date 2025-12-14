#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3596407087U;
short var_4 = (short)25694;
long long int var_6 = 1262899546764443540LL;
unsigned short var_7 = (unsigned short)53409;
signed char var_10 = (signed char)62;
int var_11 = -711523318;
short var_14 = (short)20822;
unsigned char var_15 = (unsigned char)122;
int var_16 = -971070148;
int zero = 0;
unsigned int var_17 = 898076748U;
unsigned char var_18 = (unsigned char)52;
unsigned short var_19 = (unsigned short)2114;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
