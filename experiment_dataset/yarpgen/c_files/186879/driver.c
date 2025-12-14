#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8465869594225394518ULL;
int var_1 = -813156948;
long long int var_2 = -3668659065854719446LL;
short var_4 = (short)14857;
unsigned char var_7 = (unsigned char)211;
unsigned long long int var_8 = 8273134443159267416ULL;
unsigned int var_11 = 4213897945U;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
int var_15 = -313111734;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
