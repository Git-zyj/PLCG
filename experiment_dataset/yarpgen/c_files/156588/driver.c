#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8904006363815849133ULL;
short var_1 = (short)-31481;
unsigned short var_2 = (unsigned short)33758;
short var_3 = (short)-20132;
short var_4 = (short)-28023;
short var_5 = (short)24167;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
long long int var_13 = -3630441214230539121LL;
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
