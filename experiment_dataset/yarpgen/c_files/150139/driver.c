#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9577939844797661848ULL;
int var_3 = -1637573107;
unsigned int var_5 = 1504066832U;
signed char var_6 = (signed char)-91;
unsigned long long int var_10 = 18339959504371722857ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)181;
int var_12 = 501322094;
unsigned long long int var_13 = 1585324248810908253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
