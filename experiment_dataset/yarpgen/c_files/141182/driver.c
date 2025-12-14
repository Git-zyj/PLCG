#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1383080254;
long long int var_7 = 7856570969338861252LL;
unsigned int var_11 = 2931912692U;
int zero = 0;
unsigned short var_12 = (unsigned short)23254;
signed char var_13 = (signed char)44;
void init() {
}

void checksum() {
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
