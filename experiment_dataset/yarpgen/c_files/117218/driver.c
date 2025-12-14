#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 971707889;
unsigned int var_2 = 2583800489U;
signed char var_3 = (signed char)-42;
short var_5 = (short)5006;
signed char var_7 = (signed char)21;
unsigned short var_9 = (unsigned short)47500;
short var_12 = (short)-30841;
signed char var_15 = (signed char)103;
int zero = 0;
signed char var_16 = (signed char)127;
long long int var_17 = -5165343754582373140LL;
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
