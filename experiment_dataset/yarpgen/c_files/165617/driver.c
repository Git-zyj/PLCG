#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2353427324U;
unsigned short var_4 = (unsigned short)40074;
int var_9 = -1296497330;
unsigned short var_12 = (unsigned short)840;
int zero = 0;
int var_19 = -293685116;
signed char var_20 = (signed char)45;
short var_21 = (short)-18630;
int var_22 = -1374208918;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
