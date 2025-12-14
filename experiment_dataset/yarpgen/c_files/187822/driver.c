#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16863;
unsigned int var_3 = 3042401982U;
int var_5 = 2070762575;
signed char var_7 = (signed char)27;
_Bool var_10 = (_Bool)1;
short var_16 = (short)21629;
int zero = 0;
unsigned char var_17 = (unsigned char)69;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
