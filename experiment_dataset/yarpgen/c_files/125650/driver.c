#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37491;
unsigned char var_5 = (unsigned char)86;
signed char var_8 = (signed char)126;
short var_11 = (short)-13660;
unsigned short var_13 = (unsigned short)18579;
int zero = 0;
int var_14 = -1778569149;
unsigned int var_15 = 2355135410U;
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
