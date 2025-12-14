#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned short var_2 = (unsigned short)7640;
long long int var_4 = -2548275885205607609LL;
long long int var_8 = -7190310641888074800LL;
signed char var_12 = (signed char)-81;
unsigned short var_13 = (unsigned short)59442;
int zero = 0;
unsigned short var_14 = (unsigned short)20911;
unsigned short var_15 = (unsigned short)23239;
int var_16 = 364941289;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
