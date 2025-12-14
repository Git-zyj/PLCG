#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21800;
int var_7 = -2019407664;
unsigned int var_10 = 3679775750U;
short var_11 = (short)24707;
int zero = 0;
short var_18 = (short)28186;
int var_19 = -1668630586;
int var_20 = 850958723;
unsigned short var_21 = (unsigned short)26838;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
