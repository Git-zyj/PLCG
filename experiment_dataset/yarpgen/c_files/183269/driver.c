#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1753213582;
unsigned short var_3 = (unsigned short)11398;
unsigned short var_5 = (unsigned short)5875;
signed char var_6 = (signed char)107;
unsigned short var_9 = (unsigned short)4688;
unsigned short var_10 = (unsigned short)24463;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1444022655U;
unsigned char var_14 = (unsigned char)90;
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
