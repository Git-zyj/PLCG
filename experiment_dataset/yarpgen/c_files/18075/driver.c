#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 4540475982002588266ULL;
unsigned long long int var_6 = 17685447504564158740ULL;
unsigned short var_8 = (unsigned short)39158;
unsigned int var_10 = 2883749638U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_18 = 6300234227298177269ULL;
int zero = 0;
short var_19 = (short)14048;
unsigned char var_20 = (unsigned char)192;
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
