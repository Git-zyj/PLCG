#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32737;
signed char var_8 = (signed char)-16;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)163;
int zero = 0;
short var_16 = (short)-23253;
unsigned char var_17 = (unsigned char)45;
unsigned char var_18 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
