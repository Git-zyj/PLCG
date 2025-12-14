#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3689276189329784221ULL;
unsigned short var_5 = (unsigned short)47214;
unsigned short var_11 = (unsigned short)46702;
short var_13 = (short)-2357;
int zero = 0;
short var_17 = (short)-24366;
unsigned long long int var_18 = 5417761259981056929ULL;
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
