#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1623894499;
unsigned char var_11 = (unsigned char)175;
unsigned char var_12 = (unsigned char)4;
short var_13 = (short)-13385;
int zero = 0;
int var_17 = -1812168253;
int var_18 = 202870884;
int var_19 = -1706616610;
_Bool var_20 = (_Bool)0;
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
