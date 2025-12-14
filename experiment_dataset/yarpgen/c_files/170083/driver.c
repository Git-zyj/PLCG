#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-8753;
unsigned short var_11 = (unsigned short)23263;
signed char var_12 = (signed char)-41;
int zero = 0;
signed char var_13 = (signed char)10;
int var_14 = -562422291;
int var_15 = 2120384513;
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
