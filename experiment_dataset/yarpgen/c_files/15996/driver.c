#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7979400063910283123ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-16451;
unsigned short var_18 = (unsigned short)31230;
int zero = 0;
unsigned char var_19 = (unsigned char)151;
unsigned long long int var_20 = 4270205790785253024ULL;
short var_21 = (short)12149;
unsigned short var_22 = (unsigned short)10030;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
