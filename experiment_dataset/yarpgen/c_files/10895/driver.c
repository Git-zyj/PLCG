#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8004;
unsigned short var_6 = (unsigned short)62427;
int var_9 = 700190138;
unsigned short var_10 = (unsigned short)56788;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)7884;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
