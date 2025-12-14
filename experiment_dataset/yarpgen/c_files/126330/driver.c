#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 149675175U;
short var_3 = (short)6589;
int var_5 = -1664775204;
_Bool var_9 = (_Bool)1;
int var_10 = -1400841185;
unsigned short var_11 = (unsigned short)56187;
int zero = 0;
unsigned int var_13 = 3823321147U;
int var_14 = -1940096022;
unsigned int var_15 = 4231756404U;
void init() {
}

void checksum() {
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
