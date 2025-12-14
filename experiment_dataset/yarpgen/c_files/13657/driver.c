#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25079;
unsigned char var_2 = (unsigned char)168;
signed char var_6 = (signed char)12;
long long int var_10 = -6609174966140685006LL;
unsigned char var_15 = (unsigned char)87;
int zero = 0;
long long int var_16 = -2736339766706650937LL;
signed char var_17 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
