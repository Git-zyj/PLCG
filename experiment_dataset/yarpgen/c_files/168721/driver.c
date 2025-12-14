#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19499;
unsigned short var_4 = (unsigned short)59636;
short var_5 = (short)-31601;
unsigned long long int var_8 = 1780652310979047951ULL;
unsigned short var_10 = (unsigned short)40473;
unsigned short var_12 = (unsigned short)41374;
int zero = 0;
unsigned short var_14 = (unsigned short)48549;
short var_15 = (short)-8127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
