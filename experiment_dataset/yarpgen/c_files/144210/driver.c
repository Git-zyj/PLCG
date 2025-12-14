#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19784;
int var_1 = -719013930;
unsigned char var_5 = (unsigned char)65;
int var_6 = 1863259151;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
signed char var_12 = (signed char)127;
unsigned char var_13 = (unsigned char)39;
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
