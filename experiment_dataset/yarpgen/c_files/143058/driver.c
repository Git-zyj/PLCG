#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3692664097U;
signed char var_3 = (signed char)-73;
unsigned int var_4 = 2658318174U;
int var_5 = -600483423;
unsigned short var_7 = (unsigned short)23170;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-12652;
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
