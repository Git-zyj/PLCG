#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 815204351U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1363177793U;
unsigned short var_7 = (unsigned short)24050;
unsigned char var_8 = (unsigned char)29;
short var_13 = (short)19491;
int zero = 0;
short var_16 = (short)-32104;
unsigned int var_17 = 4065545163U;
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
