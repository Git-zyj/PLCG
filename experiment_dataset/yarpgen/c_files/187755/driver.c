#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned int var_11 = 3269180844U;
int var_16 = -1110732693;
int zero = 0;
long long int var_20 = -6510846880340540608LL;
int var_21 = -2014418892;
unsigned short var_22 = (unsigned short)4442;
unsigned short var_23 = (unsigned short)65064;
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
