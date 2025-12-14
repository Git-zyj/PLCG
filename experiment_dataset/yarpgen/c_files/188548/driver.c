#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26912;
unsigned short var_2 = (unsigned short)7173;
unsigned int var_3 = 417117958U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3643673254977906398LL;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
long long int var_10 = 8040865738747853185LL;
unsigned short var_11 = (unsigned short)33046;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
