#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)6240;
unsigned long long int var_10 = 7932705619125525814ULL;
short var_12 = (short)-1528;
unsigned int var_13 = 3621789554U;
unsigned char var_14 = (unsigned char)214;
short var_15 = (short)-14881;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
long long int var_18 = 7929647858873877271LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
