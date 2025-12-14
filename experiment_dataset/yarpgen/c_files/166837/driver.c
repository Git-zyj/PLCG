#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14866;
unsigned short var_10 = (unsigned short)30433;
int zero = 0;
unsigned int var_12 = 2938230099U;
long long int var_13 = 9031601559512163726LL;
unsigned short var_14 = (unsigned short)51787;
short var_15 = (short)24626;
long long int var_16 = 6859830008217010792LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
