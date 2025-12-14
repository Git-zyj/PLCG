#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23553;
unsigned short var_4 = (unsigned short)30678;
long long int var_5 = -366943618015888087LL;
int zero = 0;
short var_14 = (short)-30499;
signed char var_15 = (signed char)26;
long long int var_16 = -5614187879474180678LL;
signed char var_17 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
