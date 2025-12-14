#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -978482806;
unsigned long long int var_1 = 15232780785259286004ULL;
unsigned int var_2 = 1848299763U;
unsigned short var_5 = (unsigned short)32918;
unsigned char var_8 = (unsigned char)24;
int var_10 = -1997503319;
int zero = 0;
unsigned int var_13 = 2191504083U;
short var_14 = (short)18083;
unsigned int var_15 = 3100890378U;
long long int var_16 = -3757018056751605996LL;
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
