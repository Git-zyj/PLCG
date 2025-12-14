#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6031;
signed char var_3 = (signed char)-108;
int var_4 = 949801215;
signed char var_10 = (signed char)-87;
unsigned int var_13 = 1891734516U;
int zero = 0;
signed char var_14 = (signed char)-95;
unsigned short var_15 = (unsigned short)34568;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
