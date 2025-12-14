#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20872;
unsigned short var_7 = (unsigned short)30740;
unsigned short var_11 = (unsigned short)60179;
unsigned short var_13 = (unsigned short)10135;
int var_14 = 2003976369;
int zero = 0;
signed char var_16 = (signed char)-59;
int var_17 = -590815798;
unsigned char var_18 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
