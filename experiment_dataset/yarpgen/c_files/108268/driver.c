#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1913377980U;
unsigned short var_1 = (unsigned short)7046;
short var_7 = (short)13350;
int zero = 0;
short var_11 = (short)-7814;
short var_12 = (short)17422;
unsigned char var_13 = (unsigned char)64;
unsigned char var_14 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
