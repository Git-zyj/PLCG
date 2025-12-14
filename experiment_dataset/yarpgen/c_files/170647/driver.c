#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17063;
int var_4 = -1370530260;
short var_5 = (short)9238;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
unsigned short var_18 = (unsigned short)5642;
signed char var_19 = (signed char)-122;
signed char var_20 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
