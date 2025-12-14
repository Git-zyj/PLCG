#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23080;
int var_1 = 1945326263;
unsigned char var_2 = (unsigned char)244;
unsigned long long int var_5 = 6452467356402058086ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-48;
int zero = 0;
unsigned short var_16 = (unsigned short)47763;
int var_17 = 467835263;
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
