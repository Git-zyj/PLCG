#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)33;
unsigned int var_6 = 1783538234U;
int var_9 = -1501714633;
int var_10 = -621250057;
unsigned short var_12 = (unsigned short)5614;
int zero = 0;
signed char var_13 = (signed char)91;
unsigned long long int var_14 = 8397267702977345736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
