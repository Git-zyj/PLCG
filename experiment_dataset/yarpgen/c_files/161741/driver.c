#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
long long int var_3 = -2501041688666478884LL;
unsigned char var_4 = (unsigned char)65;
long long int var_5 = 6025300599993936394LL;
short var_6 = (short)-32493;
int zero = 0;
long long int var_11 = -241541038786249533LL;
unsigned char var_12 = (unsigned char)4;
unsigned int var_13 = 3326099976U;
unsigned char var_14 = (unsigned char)168;
unsigned long long int var_15 = 17847647697585014517ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
