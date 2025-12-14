#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 982727212;
unsigned char var_13 = (unsigned char)27;
unsigned short var_15 = (unsigned short)40362;
int zero = 0;
unsigned long long int var_16 = 1286659386350323323ULL;
unsigned int var_17 = 1007910634U;
unsigned int var_18 = 2860030507U;
unsigned int var_19 = 1028656062U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
