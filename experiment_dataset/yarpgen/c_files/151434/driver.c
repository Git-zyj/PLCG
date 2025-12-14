#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1685509693;
short var_3 = (short)20949;
unsigned char var_7 = (unsigned char)89;
int var_8 = 573068257;
int var_9 = 136290727;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2305839691U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 668146096U;
unsigned int var_16 = 1703038546U;
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
