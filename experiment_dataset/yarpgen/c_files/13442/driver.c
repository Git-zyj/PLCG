#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
short var_2 = (short)5504;
unsigned short var_5 = (unsigned short)4417;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)199;
unsigned int var_11 = 410075380U;
int zero = 0;
signed char var_14 = (signed char)48;
signed char var_15 = (signed char)80;
unsigned long long int var_16 = 1338296190597262239ULL;
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
