#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7317721452701220113ULL;
unsigned int var_5 = 2174756520U;
unsigned long long int var_8 = 5925338845598373476ULL;
unsigned int var_14 = 3625857115U;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)22202;
void init() {
}

void checksum() {
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
