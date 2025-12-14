#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned int var_2 = 4192619759U;
long long int var_6 = -6601952073662977860LL;
unsigned int var_7 = 3660830772U;
unsigned short var_15 = (unsigned short)49995;
int zero = 0;
long long int var_16 = 4514346934475296997LL;
short var_17 = (short)-23389;
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
