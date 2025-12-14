#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11395;
short var_2 = (short)-31121;
unsigned short var_9 = (unsigned short)48324;
int zero = 0;
unsigned short var_11 = (unsigned short)19846;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)33553;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
