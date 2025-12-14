#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)983;
int var_11 = -1521007793;
unsigned short var_14 = (unsigned short)38942;
int var_15 = -846339414;
unsigned short var_16 = (unsigned short)26263;
short var_18 = (short)-5839;
int zero = 0;
short var_19 = (short)1769;
unsigned short var_20 = (unsigned short)7858;
unsigned short var_21 = (unsigned short)28537;
void init() {
}

void checksum() {
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
