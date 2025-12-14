#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
signed char var_3 = (signed char)77;
signed char var_10 = (signed char)92;
signed char var_12 = (signed char)14;
int zero = 0;
signed char var_19 = (signed char)116;
short var_20 = (short)16716;
int var_21 = 629904287;
unsigned short var_22 = (unsigned short)13171;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
