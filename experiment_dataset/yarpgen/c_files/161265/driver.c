#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
short var_3 = (short)22121;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)64;
unsigned short var_13 = (unsigned short)26927;
unsigned int var_14 = 4178386045U;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1088089131;
void init() {
}

void checksum() {
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
