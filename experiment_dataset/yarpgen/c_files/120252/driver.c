#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
unsigned char var_3 = (unsigned char)17;
unsigned long long int var_4 = 65910688651923995ULL;
unsigned char var_5 = (unsigned char)14;
unsigned int var_9 = 2532137688U;
int zero = 0;
long long int var_11 = 7771130489819269647LL;
short var_12 = (short)24288;
int var_13 = 189995501;
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
