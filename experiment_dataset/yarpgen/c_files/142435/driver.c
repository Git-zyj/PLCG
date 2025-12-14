#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
signed char var_5 = (signed char)-33;
long long int var_11 = -1590400122736307815LL;
long long int var_12 = 5682429083100259038LL;
unsigned char var_13 = (unsigned char)181;
unsigned int var_17 = 2661160962U;
short var_18 = (short)-30196;
int zero = 0;
int var_20 = 250931428;
unsigned short var_21 = (unsigned short)37709;
unsigned short var_22 = (unsigned short)42347;
void init() {
}

void checksum() {
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
