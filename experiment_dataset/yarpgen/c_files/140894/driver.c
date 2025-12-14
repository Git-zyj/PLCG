#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -27978969;
unsigned int var_2 = 3405176180U;
unsigned short var_8 = (unsigned short)28244;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)8;
unsigned short var_22 = (unsigned short)15000;
void init() {
}

void checksum() {
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
