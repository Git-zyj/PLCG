#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3089108742U;
unsigned int var_1 = 2750168704U;
unsigned char var_5 = (unsigned char)247;
unsigned char var_6 = (unsigned char)207;
short var_7 = (short)24660;
signed char var_9 = (signed char)55;
int zero = 0;
signed char var_10 = (signed char)31;
int var_11 = -1082012672;
unsigned char var_12 = (unsigned char)54;
unsigned short var_13 = (unsigned short)62025;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
