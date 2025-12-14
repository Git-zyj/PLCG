#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned short var_3 = (unsigned short)41999;
unsigned short var_6 = (unsigned short)43373;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)34258;
int zero = 0;
int var_15 = 1861592603;
_Bool var_16 = (_Bool)1;
short var_17 = (short)16663;
unsigned char var_18 = (unsigned char)127;
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
