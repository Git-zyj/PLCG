#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23705;
_Bool var_2 = (_Bool)0;
int var_4 = 912048351;
unsigned short var_7 = (unsigned short)60682;
int zero = 0;
unsigned char var_16 = (unsigned char)136;
short var_17 = (short)11019;
unsigned int var_18 = 2300796443U;
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
