#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
int var_1 = -1940129926;
unsigned short var_4 = (unsigned short)29236;
int zero = 0;
int var_20 = 2128233043;
signed char var_21 = (signed char)23;
short var_22 = (short)-3628;
unsigned short var_23 = (unsigned short)39805;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
