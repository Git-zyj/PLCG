#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6587627806128853818LL;
unsigned short var_5 = (unsigned short)4288;
signed char var_6 = (signed char)48;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_16 = (short)-14708;
unsigned char var_17 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
