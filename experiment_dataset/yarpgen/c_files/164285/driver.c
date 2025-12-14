#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1500361148;
int var_2 = -24442128;
int var_3 = -590224525;
int var_10 = 586880419;
signed char var_12 = (signed char)53;
signed char var_13 = (signed char)-68;
int var_15 = -937453232;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
short var_17 = (short)30026;
long long int var_18 = -3795746996193315297LL;
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
