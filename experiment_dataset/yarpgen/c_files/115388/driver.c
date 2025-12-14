#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1394872927U;
unsigned short var_8 = (unsigned short)37378;
_Bool var_12 = (_Bool)0;
long long int var_14 = -3623269269824176081LL;
int zero = 0;
short var_18 = (short)-20814;
unsigned int var_19 = 3650089424U;
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
