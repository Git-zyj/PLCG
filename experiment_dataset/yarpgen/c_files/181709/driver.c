#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22244;
unsigned int var_8 = 3708492569U;
unsigned char var_16 = (unsigned char)133;
int zero = 0;
unsigned char var_20 = (unsigned char)54;
unsigned short var_21 = (unsigned short)13776;
unsigned int var_22 = 292389180U;
int var_23 = 279806268;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
