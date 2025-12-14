#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
unsigned char var_1 = (unsigned char)62;
unsigned int var_2 = 1453143173U;
_Bool var_3 = (_Bool)1;
short var_5 = (short)24590;
int var_10 = 898466879;
unsigned char var_12 = (unsigned char)39;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2631679731U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
