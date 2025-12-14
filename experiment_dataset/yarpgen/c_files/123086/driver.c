#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3357317788U;
unsigned int var_2 = 2601250177U;
long long int var_4 = 869120920094905753LL;
signed char var_6 = (signed char)91;
short var_12 = (short)473;
unsigned int var_18 = 1609176696U;
int zero = 0;
signed char var_20 = (signed char)17;
unsigned char var_21 = (unsigned char)170;
void init() {
}

void checksum() {
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
