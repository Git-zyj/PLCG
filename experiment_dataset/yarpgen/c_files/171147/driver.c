#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -742245016;
unsigned char var_1 = (unsigned char)114;
int var_4 = 1916763708;
int var_11 = -1173843278;
int var_12 = -803266729;
unsigned long long int var_13 = 5050665663215714770ULL;
short var_14 = (short)29507;
int zero = 0;
unsigned int var_15 = 77645773U;
unsigned short var_16 = (unsigned short)56841;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
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
