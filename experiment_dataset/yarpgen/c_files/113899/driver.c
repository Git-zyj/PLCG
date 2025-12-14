#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)99;
unsigned short var_4 = (unsigned short)13707;
short var_12 = (short)-15816;
int zero = 0;
signed char var_13 = (signed char)47;
int var_14 = 1499785117;
signed char var_15 = (signed char)21;
unsigned short var_16 = (unsigned short)9139;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
