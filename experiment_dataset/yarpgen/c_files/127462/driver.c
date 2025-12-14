#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 82273897;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-19583;
short var_5 = (short)-10271;
int var_7 = 1408936346;
int zero = 0;
unsigned char var_14 = (unsigned char)192;
unsigned short var_15 = (unsigned short)35175;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
