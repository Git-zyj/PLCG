#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)92;
int var_4 = -1137835678;
long long int var_6 = -7178922790600765048LL;
unsigned int var_7 = 2255358955U;
unsigned char var_8 = (unsigned char)52;
signed char var_11 = (signed char)35;
unsigned short var_14 = (unsigned short)18315;
unsigned short var_17 = (unsigned short)21354;
int zero = 0;
signed char var_19 = (signed char)64;
unsigned short var_20 = (unsigned short)11116;
short var_21 = (short)-26204;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
