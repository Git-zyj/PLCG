#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1894465440;
unsigned short var_7 = (unsigned short)31125;
unsigned char var_11 = (unsigned char)239;
int zero = 0;
long long int var_14 = 3550121773399984511LL;
unsigned short var_15 = (unsigned short)5799;
short var_16 = (short)-24172;
unsigned short var_17 = (unsigned short)765;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
