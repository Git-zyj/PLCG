#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30157;
_Bool var_4 = (_Bool)1;
int var_12 = -240933879;
unsigned char var_16 = (unsigned char)35;
unsigned char var_17 = (unsigned char)48;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
short var_20 = (short)-18499;
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
