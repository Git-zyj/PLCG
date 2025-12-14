#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 973119498;
int var_3 = -330181113;
unsigned int var_7 = 524824941U;
signed char var_8 = (signed char)-121;
unsigned short var_10 = (unsigned short)3767;
unsigned short var_12 = (unsigned short)2154;
unsigned int var_13 = 3821660461U;
long long int var_16 = 2611585734118526678LL;
int zero = 0;
unsigned short var_19 = (unsigned short)64686;
int var_20 = -1864194083;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
