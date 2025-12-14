#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3973626265U;
long long int var_2 = -1015517450115690836LL;
short var_12 = (short)-23254;
unsigned char var_13 = (unsigned char)135;
int zero = 0;
int var_20 = 1667666273;
short var_21 = (short)12735;
short var_22 = (short)6887;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
