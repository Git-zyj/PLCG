#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)45272;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)20015;
int var_11 = -1950723120;
int zero = 0;
short var_14 = (short)-25901;
signed char var_15 = (signed char)64;
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
