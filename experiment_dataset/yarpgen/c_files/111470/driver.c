#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13854;
unsigned short var_3 = (unsigned short)31410;
unsigned int var_6 = 2686557539U;
unsigned short var_8 = (unsigned short)17949;
unsigned int var_9 = 218976123U;
int zero = 0;
short var_16 = (short)19418;
short var_17 = (short)26178;
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
