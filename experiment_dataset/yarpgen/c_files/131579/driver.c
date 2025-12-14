#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51866;
long long int var_1 = -4609682059145394574LL;
short var_4 = (short)18605;
short var_7 = (short)-18497;
unsigned short var_8 = (unsigned short)3766;
int zero = 0;
unsigned short var_10 = (unsigned short)9406;
unsigned short var_11 = (unsigned short)24850;
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
