#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 165200128;
signed char var_1 = (signed char)100;
long long int var_4 = 3621660811219459809LL;
unsigned short var_6 = (unsigned short)35298;
unsigned int var_7 = 1292822930U;
int zero = 0;
short var_11 = (short)29894;
unsigned char var_12 = (unsigned char)240;
short var_13 = (short)14565;
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
