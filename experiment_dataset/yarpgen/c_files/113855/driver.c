#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned char var_2 = (unsigned char)124;
int var_3 = -650360845;
int var_5 = 923678738;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-26220;
int zero = 0;
short var_16 = (short)6520;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)65;
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
