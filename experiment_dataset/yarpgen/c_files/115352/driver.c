#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
unsigned short var_6 = (unsigned short)41642;
unsigned char var_8 = (unsigned char)203;
unsigned short var_11 = (unsigned short)30123;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
unsigned long long int var_16 = 2266951619640185416ULL;
unsigned long long int var_17 = 12369451125611653389ULL;
int var_18 = -889473652;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
