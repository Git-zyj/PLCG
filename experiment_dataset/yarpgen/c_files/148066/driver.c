#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
short var_2 = (short)-25548;
unsigned char var_3 = (unsigned char)50;
short var_5 = (short)-16185;
signed char var_12 = (signed char)88;
int zero = 0;
short var_14 = (short)-29016;
long long int var_15 = -373261224543290783LL;
void init() {
}

void checksum() {
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
