#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)213;
unsigned char var_14 = (unsigned char)21;
int zero = 0;
unsigned short var_17 = (unsigned short)56178;
unsigned long long int var_18 = 13385664038335652798ULL;
short var_19 = (short)-17566;
unsigned int var_20 = 2990539773U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
