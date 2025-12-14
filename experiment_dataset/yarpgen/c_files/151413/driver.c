#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_3 = 284058409587156530ULL;
unsigned short var_4 = (unsigned short)49483;
short var_6 = (short)-2225;
int var_11 = -413857187;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned int var_15 = 3117313257U;
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
