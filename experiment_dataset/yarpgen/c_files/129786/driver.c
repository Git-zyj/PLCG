#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)24;
unsigned short var_12 = (unsigned short)35285;
int zero = 0;
unsigned int var_20 = 2468992054U;
unsigned short var_21 = (unsigned short)63574;
short var_22 = (short)14025;
signed char var_23 = (signed char)-50;
long long int var_24 = -2555050493335641741LL;
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
