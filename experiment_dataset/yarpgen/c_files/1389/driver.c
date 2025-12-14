#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)58592;
unsigned char var_11 = (unsigned char)26;
signed char var_12 = (signed char)58;
int zero = 0;
unsigned short var_16 = (unsigned short)61364;
unsigned long long int var_17 = 5730366446357899460ULL;
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
