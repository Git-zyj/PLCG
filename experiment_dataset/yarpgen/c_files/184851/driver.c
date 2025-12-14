#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)60;
short var_4 = (short)7944;
int var_6 = -289908837;
short var_7 = (short)-8693;
unsigned char var_10 = (unsigned char)171;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
unsigned short var_15 = (unsigned short)9793;
unsigned short var_16 = (unsigned short)52697;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
