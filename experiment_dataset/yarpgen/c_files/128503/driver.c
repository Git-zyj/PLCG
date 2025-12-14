#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
long long int var_3 = -9151458915714304333LL;
unsigned int var_4 = 2005063436U;
short var_7 = (short)8595;
_Bool var_9 = (_Bool)0;
int var_10 = -1561927992;
int zero = 0;
unsigned char var_13 = (unsigned char)160;
signed char var_14 = (signed char)-76;
unsigned char var_15 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
