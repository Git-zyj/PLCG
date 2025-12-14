#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27236;
unsigned char var_2 = (unsigned char)245;
signed char var_5 = (signed char)-122;
short var_7 = (short)29884;
signed char var_10 = (signed char)120;
unsigned int var_11 = 1931800226U;
int zero = 0;
int var_13 = 549375954;
short var_14 = (short)-1249;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
