#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 59382955;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-779;
signed char var_7 = (signed char)122;
unsigned short var_16 = (unsigned short)44668;
int zero = 0;
signed char var_18 = (signed char)-109;
int var_19 = -2039197903;
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
