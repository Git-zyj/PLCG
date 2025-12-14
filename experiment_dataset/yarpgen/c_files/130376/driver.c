#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25970;
int var_2 = 1966098734;
short var_3 = (short)13945;
unsigned short var_5 = (unsigned short)42216;
signed char var_6 = (signed char)-30;
int zero = 0;
short var_12 = (short)-7500;
short var_13 = (short)8361;
long long int var_14 = -1499400389034647119LL;
int var_15 = -657221564;
long long int var_16 = -875154395176512647LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
