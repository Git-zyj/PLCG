#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 660664867U;
short var_6 = (short)-17978;
unsigned char var_8 = (unsigned char)114;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_18 = (short)14241;
unsigned int var_19 = 1133795487U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
